/*!
\authors   Олег Лесков <oleg@oSvoj.ru>
\version   0.0.1a
\date      10.2022
\copyright MIT
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "0022.h"

void s0022 ( void ){
    struct xo {
        char a[SZ][SZ];
        char b;
        bool c;
    };
    struct xo d = {{{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}}," ",false};
    printSZ(d.a);
    hodP(&d.a[0][0]);
    printSZ(d.a);
}
void printSZ ( char a[SZ][SZ] ){
    for (int i = 0; i < SZ; i ++){
        for (int n = 0; n < SZ; n++){
            printf(" %c ",a[i][n]);
            if(n+1 < SZ) printf("|");
        }
        if(i+1 < SZ) printf("\n-----------\n");
    }
}
void hodP ( char *p ){
    int a,b;
    printf("\nВведите номер строки: ");
    scanf("%d", &a);
    printf("\nВведите номер ячейки: ");
    scanf("%d", &b);
    *(p+a*SZ+b) = 'O';
    //printf("\n--: %p >> %d \n", p, *(p+a*SZ+b));
}
