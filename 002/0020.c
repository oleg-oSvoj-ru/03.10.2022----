/*!
\authors   Олег Лесков <oleg@oSvoj.ru>
\version   0.0.1a
\date      10.2022
\copyright MIT
*/
#define HELLO "Hello World"
/// Подключаем стандартную библиотеку
#include <stdio.h>
#include "0020.h"

void start (int *p) {
    printf("Адресс a: %p \n", p);
    printf(HELLO);
    printf("\nЗначение a: %d", *p);
    *p = 10;
    //==========================================
    unsigned long long res = 0;
    unsigned int n   = 3;
    fact(&n, &res);
    printf("\n\n\nфакториал: %d\n\n\n", res);
}
void fact (unsigned int *i, unsigned long long *p ){
    if ( *i > 1 ){
        if ( *p == 0 ) *p = (unsigned long long)(*i);
        *i = *i - 1;
        *p = *p  *  (unsigned long long)(*i);
        fact(i, p);
    }
}
