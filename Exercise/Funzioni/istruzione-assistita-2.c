/*
    Modificate il programma istruzione-assistita.c, così che siano stampati vari commenti
    per ogni risposta, come segue:
    Possibili commenti per una risposta corretta:
    Very good!
    Excellent!
    Nice work!
    Keep up the good work!

    Possibili commenti per una risposta sbagliata:
    No. Please try again.
    Wrong. Try once more.
    Don't give up!
    No. Keep trying.

    Utilizzate la generazione di numeri casuali per scegliere un numero da 1 a 4 da usare
    per selezionare uno dei quattro commenti appropriati per ogni risposta corretta o sbagliata.
    Usate l'istruzione switch per selezionare le risposte.
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

bool poniDomanda(void);
void rispostaCorretta(int numeroGenerato);
void rispostaErrata(int numeroGenerato);

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
    int generaRisposta;

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
    prossimaDomanda = true;

    return prossimaDomanda;
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