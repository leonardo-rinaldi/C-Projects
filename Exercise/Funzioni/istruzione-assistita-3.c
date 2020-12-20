/*
    Modificate il programma istruzione-assistita-3.c per contare il numero delle
    risposte esatte e sbagliate scritte dallo studente. Dopo che lo studente scrive
    10 risposte, il vostro programma deve calcolare la percentuale di quelle corrette.
    Se la percentuale è inferiore al 75%, stampate "Please ask your teacher for extra
    help.", quindi reinizializzate il programma così che possa provarci un altro studente.
    Se la percentuale è del 75% o maggiore, stampate "Congratulations, you are ready to go
    to the next level!", quindi, anche in questo caso, reinizializzate il programma così che
    possa provarci un altro studente.
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

unsigned int poniDomanda(void);
void rispostaCorretta(int numeroGenerato);
void rispostaErrata(int numeroGenerato);
void controllaRisposte(unsigned int numeroRisposte);

int main(void) {
    srand(time(NULL));
    unsigned int risposteCorrette = 0;

    while(risposteCorrette != 10) {
        risposteCorrette += poniDomanda();
    }
    controllaRisposte(risposteCorrette);
}

unsigned int poniDomanda(void) {
    unsigned int num1 = 1 + rand() % 9;
    unsigned int num2 = 1 + rand() % 9;
    unsigned int rispostaData = 0;
    unsigned int rispostaEsatta = 0;
    int generaRisposta = 0;
    unsigned int numeroRisposteCorrette = 0;
    unsigned int numeroRisposteErrate = 0;

    printf("How much is %u times %u? \n", num1, num2);
    scanf("%u", &rispostaData);
    rispostaEsatta = pow(num2, num1);

       while(rispostaData != rispostaEsatta) {    
           generaRisposta = 1 + rand() % 4;

        if(rispostaData != rispostaEsatta) {
            rispostaErrata(generaRisposta);
        }
        printf("How much is %u times %u? \n", num1, num2);
        scanf("%u", &rispostaData);
        }
    generaRisposta = 1 + rand() % 4;
    rispostaCorretta(generaRisposta);
    numeroRisposteCorrette++;

    return numeroRisposteCorrette;
}

void rispostaCorretta(int numeroGenerato) {
    switch(numeroGenerato) {
        case 1:
            puts("Very good!");
            break;
        case 2:
            puts("Excellent!");
            break;
        case 3:
            puts("Nice work!");
            break;
        case 4:
            puts("Keep up the good work!");
            break;
    }
}

void rispostaErrata(int numeroGenerato) {
    switch(numeroGenerato) {
        case 1:
            puts("No. Please try again.");
            break;
        case 2:
            puts("Wrong. Try once more.");
            break;
        case 3:
            puts("Don't give up!");
            break;
        case 4:
            puts("No. Keep trying.");
            break;
    }
}

void controllaRisposte(unsigned int numeroRisposte) {
    double soglia = 10 * 0.75;

    if(numeroRisposte > soglia) {
        puts("Congratulations, you are ready to go to the next level!");
    } else {
        puts("Please ask your teacher for extra help");
    }
}