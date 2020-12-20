/*
    Modificate il programma del craps per consentire di scommettere. Impacchettate
    come funzione la porzione del programma che esegue un giro del gioco del craps.
    Inizializzate la variabile banckBalance a 1000 dollari. Richiedete al giocatore di
    inserire una scomessa come valore per la variabile wager. Usate un ciclo while per
    controllare che wager sia minore uguale a bankBalance e, se non lo è, richiedere
    all'utente di reinserire il valore di wager finchè non viene inserito un valore 
    valido, fate eseguire un giro del gioco del craps. Se il giocatore vince, aumentate
    il valore di bankBalance della quantità pari al valore di wager e stampate il nuovo
    bankBalance. Se il giocatore perde, diminuite il valore di bankBalance e controllate
    se bankBalance è diventato zero, se è così, stampate il messaggio "Sorry, You busted!".
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};
enum Status gameStatus;

int rollDice(void);
void game(void);
void scomessa(void);

int main(void) {
    srand(time(NULL));
    scomessa();
   
}

void game(void) {
    int myPoint;
   
    int sum = rollDice();

    switch(sum) {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf("Point is %d\n", myPoint);
            break;
    }

    while(CONTINUE == gameStatus) {
        sum = rollDice();

        if(sum == myPoint) {
            gameStatus = WON;
        } else {
            if(7 == sum) {
                gameStatus = LOST;
            }
        }
    }

    if(WON == gameStatus) {
        puts("Player wins");
    } else {
        puts("Player loses");
    }
}


int rollDice(void) {
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}

void scomessa(void) {
    double bankBalance = 1000;
    double wager;

    puts("Enter a bet:");
    scanf("%lf", &wager);

    while(wager >= bankBalance) {
        puts("Too hight!");
        puts("Enter a bet:");
        scanf("%lf", &wager);
    }
    game();

    if(gameStatus == WON) {
        bankBalance += wager;
        printf("Bank balance = %.2lf \n", bankBalance);
    } else 
    if(gameStatus == LOST) {
        bankBalance -= wager;
        printf("Bank balance = %.2lf \n", bankBalance);
    }

    if(bankBalance <= 0) {
        puts("Sorry. You Busted! \n");
    }
}