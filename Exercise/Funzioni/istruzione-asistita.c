/*
    Scrivete un programma che aiuti uno studente di scuola superiore a
    imparare la moltiplicazione. Usate la funzione rand per generare due
    interi positivi di una cifra. Il programma deve rappresentare all'utente
    una domanda del tipo

    How much is 6 times 7?

    Lo studente inserisce quindi la risposta e il programma la controlla. Se è 
    corretta, stampate il messaggio "Very good!" e ponete come domanda un'altra
    moltiplicazione. Se la risposta è sbagliata, stampate il messaggio "No, please
    try again" e lasciate che lo studente tenti di rispondere alla stessa domanda 
    ripetutamente, finchè non risponde in modo esatto. Si deve usare una funzione
    separata per generare ogni nuova domanda. Questa funzione deve essere chimata una
    volta quando l'applicazione inizia l'esecuzione e ogni volta che l'utente risponde
    corretamente alla domanda.
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
    prossimaDomanda = true;
    puts("Very good!");

    return prossimaDomanda;
}
