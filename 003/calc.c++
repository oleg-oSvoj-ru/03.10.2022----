/*!
\authors   Олег Лесков <oleg@oSvoj.ru>
\version   0.0.1a
\date      10.2022
\copyright MIT
*/
#include <iostream>
using std::cout;
using std::cin;
#include "compl.c++"

class Calc {
private:
    Compl a,b;
public:
    Calc(){
        float c,d;
        cout << "\e[1;1H\e[2J";
        cout << "введите вещественную часть 1 числа:\n";
        cin >> c;
        cout << "введите мнимую часть 1 числа:\n";
        cin >> d;
        a = Compl ( c, d );
        //a.plus(&b);
        b = a.plus(b);
        b.print();
    }
    ~Calc(){

    }

};
