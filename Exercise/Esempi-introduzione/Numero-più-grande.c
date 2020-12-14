/*
    Il processo di elaborazione che consiste nel trovare il numero più grande
    (cioè il massimo di un insieme di numeri) si usa frequentemente nelle
    applicazioni informatiche. Ad esempio, un programma che determina il vincitore
    di una gara di vendite riceve in ingresso il numero di unità vendute per ogni 
    persona addetta alle vendite. La persona che vende più unità vince la gara.
    Scrivete un programma in C che legga una serie di 10 numeri non-negativi e
    determini e stampi il maggiore dei numeri.
*/

#include <stdio.h>

int main(void) {
    unsigned int counter = 0;
    int number;
    int largest = 0;

    while(counter < 10) {
        puts("Inserire un numero:");
        scanf("%d", &number);

        if(number > largest) {
            largest = number;
        }
        counter++;
    }
    printf("Il numero inserito più grande è: %d \n", largest);
}