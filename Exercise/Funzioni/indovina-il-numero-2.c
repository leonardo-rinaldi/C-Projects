/*
    Modificate il programma indovina-il-numero per contare il numero delle risposte date dal
    giocatore. Se il numero è 10 o di meno, stampate "Either you know the secret or you got 
    lucky!". Se il giocatore indovina il numero dopo dieci tentativi, allora stampate "Ahah!
    You know the secret!". Se il giocatore da più di dieci risposte, allora stampate "You 
    should be able to do better!". 
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int generaNumero(void);
void valutaTentativi(int tentativi);

int main(void) {
    srand(time(NULL));
    bool isCorrect = false;
    bool continuazione = false;
    int numInserito = 0;
    int tentativi;

do{
    int numGenerato = generaNumero();
    tentativi = 0;
    puts("I have a number between 1 and 1000");
    puts("Can you guess my number?");
    puts("Please type your first guess.");
    scanf("%d", &numInserito);

    while(isCorrect != true) {
        if(numInserito == numGenerato) {
            isCorrect = true;
            tentativi++;
            puts("Excellent! You guessed the number!");
        } else
            if(numInserito < numGenerato) {
                tentativi++;
                puts("Too low. Try again.");
                scanf("%d", &numInserito);
            } else {
                tentativi++;
                puts("Too high. Try again");
                scanf("%d", &numInserito);
            }
    }

    valutaTentativi(tentativi);

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

void valutaTentativi(int tentativi) {
    if(tentativi == 10) {
        puts("");
        puts("Ahah! You know the secret!");
    } else
    if(tentativi <= 10 ) {
        puts("");
        puts("Either you know the secret or you got lucky!");
    } else {
        puts("");
        puts("You should be able to do better!");
    }
}