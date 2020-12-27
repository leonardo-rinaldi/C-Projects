/*
    Un numero primo è un intero maggiore di 1 divisibile solo per se stesso
    e per 1. Il Setaccio di Eratostene è un metodo per trovare i numeri primi.
    Esso opera come segue:
    a) Create un array con tutti gli elementi inizializzati a 1 (vero). Gli
       elementi dell'array con indici primi rimarranno con valore 1. Tutti gli 
       altri elementi dell'array saranno alla fine posti a zero.
    b) Partendo dall'indice 2 dell'array (l'inidce 1 non è primo), ogni volta che 
       si trova u elemento dell'array il cui valore è 1, effettuate un'iterazione
       lungo il resto dell'array e ponete a zero ogni elemento il cui indice è un 
       multiplo dell'indice dell'elemento con valore 1. Per l'indice 2 dell'array 
       tutti gli elementi che seguono nell'array che sono multipli di 2 saranno
       posti a zero (quelli con gli indici 4, 6, 8, 10 e così via). Per l'indice 3
       dell'array, tutti gli elementi successivi nell'array che sono multipli di 3
       saranno posti a zero (quelli con indici 6, 9, 12, 15 e così via).
    Al termine di questo processo, gli elementi dell'array che hanno ancora il valore 
    1 indicano che l'indice corrispondente è un numero primo. Scrivete un programma che 
    usi un array di 1000 elemeti per trovcare e stampare i numeri primi tra 1 e 999. Ignorate 
    l'elemento 0 dell'array.
*/

#include <stdio.h>

void inizializzaArray(int numeriPrimi[]);
void inizializzaArrayDiNumeri(int numeri[]);
void controllaArray(int numeriPrimi[]);
void stampaNumeriPrimi(const int numeriPrimi[], int numeri[]);

int main(void) {
    int numeriPrimi[1000];
    int numeri[1000];

    inizializzaArray(numeriPrimi);
    inizializzaArrayDiNumeri(numeri);
    controllaArray(numeriPrimi);
    stampaNumeriPrimi(numeriPrimi, numeri);
}

/*
    Inizializza l'array con solo valori 1
*/

void inizializzaArray(int numeriPrimi[]) {
    for(size_t i = 0; i < 1000; i++) {
        numeriPrimi[i] = 1;
    }
} 

/*
    Inizializza l'array con i numeri da 1 a 1000
*/

void inizializzaArrayDiNumeri(int numeri[]) {
    for(size_t i = 1; i < 1000; i++) {
        numeri[i] = i;
    }
}

/*
    Controlla se l'indice dell'array è un numero primo, se
    non lo è cambia il valore dell'elemento a 0.
*/

void controllaArray(int numeriPrimi[]) {
    for(size_t x = 1; x < 1000; x++) {  //cicla tutto l'array alla ricerca di elementi che valgono 1

        if(x == 1) {
            numeriPrimi[x] = 0;
        } else if(numeriPrimi[x] == 1) {

            for(size_t y = x; y < 1000; y++) {  //controlla che gli elementi y dell'array siano divisibili per x
                if(y % x == 0 && y != x) {  
                    numeriPrimi[y] = 0;
                }
            }
        }
    }
}

/*
    Confronta l'array numeriPrimi con l'array numeri, se l'elemento all'indice x 
    di numeriPrimi corripsonde a 1, viene stampato l'elemento all'indice x
    dell'array numeri.
*/

void stampaNumeriPrimi(const int numeriPrimi[], int numeri[]) {
    for(size_t x = 1; x < 1000; x++) {
        if(numeriPrimi[x] == 1) {
            printf("%d ", numeri[x]);
        }
    }
    puts("");
}
