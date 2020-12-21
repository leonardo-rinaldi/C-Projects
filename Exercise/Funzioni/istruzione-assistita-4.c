/*
    Modificate il programma istruzione-assistita-3.c per permettere all'utente
    di inserire un livello di difficoltà: a un livello di difficoltà 1, il
    programma deve usare nei problemi solo numeri a cifra singol; a un livello
    di difficoltà 2, numeri a due cifre; a livello di difficoltà 3, tre cifre.
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
unsigned int generaNumeroCasuale(unsigned int difficoltà);

int main(void) {
    srand(time(NULL));
    unsigned int risposteCorrette = 0;

    while(risposteCorrette != 10) {
        risposteCorrette += poniDomanda();
    }
    controllaRisposte(risposteCorrette);
}

unsigned int poniDomanda(void) {
    unsigned int livelloDiDifficoltà;
    unsigned int rispostaData = 0;
    unsigned int rispostaEsatta = 0;
    int generaRisposta = 0;
    unsigned int numeroRisposteCorrette = 0;
    unsigned int numeroRisposteErrate = 0;

    puts("Inserisci un livello di difficoltà tra 1-2-3:");
    scanf("%u", &livelloDiDifficoltà);

    unsigned int num1 = generaNumeroCasuale(livelloDiDifficoltà);
    unsigned int num2 = generaNumeroCasuale(livelloDiDifficoltà);

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

unsigned int generaNumeroCasuale(unsigned int difficoltà) {
    int numGenerato;

    if(difficoltà == 1) {
        numGenerato = 1 + rand() % 9;
    } else 
    if(difficoltà == 2) {
        numGenerato = rand() % (99 + 1 - 10) + 10; //rand() % (max_number + 1 - minimum_number) + minimum_number 
    } else {
        numGenerato = rand() % (999 + 1 - 100) + 100;
    }
    return numGenerato;
}