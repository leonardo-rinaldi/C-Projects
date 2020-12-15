/*
    Scrivere delle istruzioni for che stampino le seguenti sequenze di valori:
    a) 1,2,3,4,5,6,7
    b) 3,8,13,18,23
    c) 20,14,8,2,-4,-10
    d) 19,27,35,43,51
*/

#include <stdio.h>

int main(void) {
    //a)
    for(unsigned int x = 1; x <= 7; x++) {
        if(x < 7) {
            printf("%u,", x);
        } else {
            printf("%u \n", x);
        }
    }

    //b)

    for(unsigned int x = 3; x <= 23; x += 5) {
        if(x < 23) {
            printf("%u,", x);
        } else {
            printf("%u \n", x);
        }
    }

    //c)

    for(int x = 20; x >= -10; x-= 6) {
        if(x > -10) {
            printf("%d,", x);
        } else {
            printf("%d \n", x);
        }
    }

    //d)

    for(unsigned int x = 19; x <= 51; x += 8) {
        if(x < 51) {
            printf("%u,", x);
        } else {
            printf("%u \n", x);
        }
    }
}