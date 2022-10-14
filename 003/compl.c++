/*!
\authors   Олег Лесков <oleg@oSvoj.ru>
\version   0.0.1a
\date      10.2022
\copyright MIT
*/
#include <iostream>
using std::cout;


class Compl
{
    private:
       float a;
       float b;
       char *f;
    public:
        Compl(float c, float d){
            a = c;
            b = d;
        
        }
        Compl(){
            a = 0;
            b = 0;
        }
        void plus(float c, float d){
            a = a + c;
            b = b + d;
        }
        Compl plus(Compl c){
           c.plus( a, b );
           return c;

        }
        void plus(Compl *c){
            c->plus( a, b );
        }/**/
        void print(void){
            char z;
            if (b < 0){
                z = '-';
                b = b * -1;
            }
            else {
                z = '+';
            }
            cout << a << z << "j" << b << "::: "<< *(f+3+3) << "\n";
        }
};
Compl operator + (Compl c1, Compl c2)
{
    c1.plus(c2);
    return Compl (c1);
};
