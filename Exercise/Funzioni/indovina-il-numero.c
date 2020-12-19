/*
    Scrivete un programma in C che realizzi il gioco "indovina il numero"
    come segue: il vostro programma sceglie il numero da indovinare selezionando 
    a caso un intero nell'intervallo da 1 a 1000. Il programma quindi stampa:

    I have a number between 1 and 1000.
    Can you guess my number?
    Please type your first guess.

    Il giocatore scrive una prima risposta. Il programma risponde con una delle
    seguenti frasi:

    1. Excellent! You guessed the number!
        Would you like to play again(1 = y or 2 = n)?

    2. Too low. Try again.
    3. Too high. Try again.

    Se la risposta del giocatore è sbagliata, il vostro programma deve entrare in un
    ciclo finchè il giocatore non indovina finalmente il numero giusto. Deve continuare
    a dire al giocatore "Too high" o "Too low" per aiutarlo a "convergere" sulla risposta
    corretta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int generaNumero(void);

int main(void) {
    srand(time(NULL));
    bool isCorrect = false;
    bool continuazione = false;
    int numInserito = 0;

do{
    int numGenerato = generaNumero();
    puts("I have a number between 1 and 1000");
    puts("Can you guess my number?");
    puts("Please type your first guess.");
    scanf("%d", &numInserito);

    while(isCorrect != true) {
        if(numInserito == numGenerato) {
            isCorrect = true;
            puts("Excellent! You guessed the number!");
        } else
            if(numInserito < numGenerato) {
                puts("Too low. Try again.");
                scanf("%d", &numInserito);
            } else {
                puts("Too high. Try again");
                scanf("%d", &numInserito);
            }
    }
    puts("");
    puts("Would you like to play again (1 = y or 2 = n)?");
    int scelta;
    scanf("%d", &scelta);

    if(scelta == 1) {
        continuazione = true;
    } else {
        continuazione = false;
    }

} while(continuazione);

}

int generaNumero(void) {
    int numeroGenerato = 1 + rand() % 1000;
    return numeroGenerato;
}

