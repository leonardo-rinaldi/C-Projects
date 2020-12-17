/*
    Scrivete un programma che stampi la seguente forma a rombo.
    Potete usare delle istruzioni printf che stampano un singolo
    asterisco (*) o un singolo spazio.

         *
        ***
       *****
      *******
     *********
      *******
       *****
        ***
         * 
*/

#include <stdio.h>

int main(void) {
int j = 1;

/*
    Stampa la parte superiore
*/

for(int k = 5; k > 0; k--) {
    for(int i = 1; i < k; i++) {
        printf("%s", " ");
    }
        for(unsigned int i = 1; i <= j; i++) {
          printf("*"); 
        }
        if(j < 9) {
            j+=2;
        }
    puts("");
    }


/*
    Stampa la parte inferiore
*/
 
j = 7;

for(int k = 1; k <= 5; k++) {
    for(int i = 1; i <= k; i++) {
        printf("%s", " ");
    }
        for(int i = j; i >= 1; i--) {
          printf("*"); 
        }
        if(j > 0) {
            j-=2;
        }
    puts("");
    }
}

