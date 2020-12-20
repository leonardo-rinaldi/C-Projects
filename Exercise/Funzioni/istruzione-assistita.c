/*

*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

bool poniDomanda(void);

int main(void) {
    srand(time(NULL));

    while(poniDomanda()) {
        poniDomanda();
    }
}

bool poniDomanda(void) {
    unsigned int num1 = 1 + rand() % 9;
    unsigned int num2 = 1 + rand() % 9;
    unsigned int rispostaData;
    unsigned int rispostaEsatta;
    bool prossimaDomanda = false;


    printf("How much is %u times %u? \n", num1, num2);
    scanf("%u", &rispostaData);
    rispostaEsatta = pow(num2, num1);

       while(rispostaData != rispostaEsatta) {    

        if(rispostaData != rispostaEsatta) {
            puts("No, Please try again");
        }
        printf("How much is %u times %u? \n", num1, num2);
        scanf("%u", &rispostaData);
        }
    puts("Very good!");
    prossimaDomanda = true;

    return prossimaDomanda;
}
