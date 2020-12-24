/*

*/

#include <stdio.h>

int main(void) {
    int t[2][5] = {0};

    t[1][2] = 0;

    for(size_t x = 0; x < 2; x++) {
        for(size_t y = 0; y < 5; y++) {
            t[x][y] = 0;
        }
    }

    for(size_t x = 0; x < 2; x++) {
        for(size_t y = 0; y < 5; y++) {
            int elemento;
            printf("Inserite gli elementi per la riga %lu: ", x + 1);
            scanf("%d", &elemento);
            t[x][y] = elemento;
        }   
    }

    int minore = t[0][0];
    for(size_t x = 0; x < 2; x++) {
        for(size_t y = 0; y < 5; y++) {
            if(t[x][y] < minore) {
                minore = t[x][y];
            }
        }
    }

    for(size_t i = 0; i < 5; i++) {
        printf("%d", t[0][i]);
    }
    puts("");

    for(size_t i = 0; i < 2; i++) {
        printf("%d", t[i][3]);
        puts("");
    }
}