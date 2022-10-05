/*!
\authors   Олег Лесков <oleg@oSvoj.ru>
\version   0.0.1a
\date      10.2022
\copyright MIT
*/

/// Подключаем стандартную библиотеку
#include <stdio.h>
#include "001.h"

int start (void) {
    /// Вывовдим в стандартный вывод надпись \
        Hello Start!!!
    int a = 5;
    int b,c;
    b = a * 3;
    c = b - a;
    printf ("c = %d;", c);
    printf ("a = %d;\n", a);
    printf ("b = %d", b);
    s002();
    return 0;
}

void s002 (void){
    int d;
    printf("\nВведите переменную d: ");
    scanf("%d", &d);
    if (d > -10 && d < 10) {
        printf("\nd = %d", d);
        s001(d);/**/
    }
    else{
        printf("\nДанные введены не верно, попробуйте заново.");
        s002();
    }

}

void s001 (int a) {
    if (a > 0){
        printf ("\nПеременная a: %d , больше 0.",a);
    }
    else if (a == 0){
        printf ("\nПеременная a: %d , равна 0.",a);
    }
    else {
        printf("\nПеременная a: %d , меньше 0.",a);
    }
}
