/*!
\authors   Олег Лесков <oleg@oSvoj.ru>
\version   0.0.1a
\date      10.2022
\copyright MIT
*/

/// Подключаем стандартную библиотеку
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "0021.h"

void s0021(void){
    float a[10];
    int b[10];
    int c[5] = {6,4,3};

    a[0]     = c[1];
    int i    = 0;
    a[1]     = c[i];

    printf("a[1] = %d\n", a[1]);

    for ( i = 0; i < 10; i++ ){
        b[i] = (int)(random()*100/RAND_MAX);
        printf("a[%d] = %d\n",i, b[i]);
    }
    int *p;
    p = &b[0];
    printf("\n\n\nb[1] = %d\n", *(p+1));
    printf("b[2] = %d\n", *(p+2));
    printf("b[3] = %d\n", *(p+3));
    sort(b);
}
void sort(int b[10]){
    bool t = false;
    int tmp;
    int i;

    do {
        t = false;
        for( i = 0; i<9; i++){
            if ( b[i] > b[i+1]){
                tmp = b[i];
                b[i]=b[i+1];
                b[i+1]=tmp;
                t = true;
            }
        }
    } while (t);
    for (i = 0; i < 10; i++){
        printf("b[%d]=%d\n", i,b[i]);
    }
}
