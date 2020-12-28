/*
    Un palindromo è una stringa che si scrive e si legge allo stesso modo in
    avanti e all'indietro. Alcuni esempi di palindromi sono: "radar", "able
    was i ere i saw elba" e, se ignorate gli spazi, "a man a plan a canal 
    panama". Scrivete una funzione ricorsiva testPalindrome che restituisca 
    1 se la stringa memorizzata in un array è un palindromo e altrimenti 0. 
    La funzione deve ignorare gli spazi nella stringa. 
*/

#include <stdio.h>
#define SIZE 27

int contaSpazi(char stringa[]);
void removeSpaces(char stringa[], char stringaSenzaSpazi[]); 
int testPalindrome(char stringa[], int partenza, int dimensione);

int main(void) {
    char stringa[SIZE] = "a man a plan a canal panama";
    int risultato;
    int numeroSpazi = contaSpazi(stringa);
    
    if(numeroSpazi > 0) {
        char stringaSenzaSpazi[SIZE - numeroSpazi];
        removeSpaces(stringa, stringaSenzaSpazi);
        risultato = testPalindrome(stringaSenzaSpazi, 0, SIZE - numeroSpazi);
    } else {
        risultato = testPalindrome(stringa, 0, SIZE);
    }
    
    printf("%d \n", risultato);
    
}

/*
    Conta il numero di spazi presenti in una stringa e li
    restituisce.
*/

int contaSpazi(char stringa[]) {
    int numeroSpazi = 0;

    for(size_t i = 0; i < SIZE; i++) {
        if(stringa[i] == ' ') {
            numeroSpazi++;
        }
    }
    return numeroSpazi;
}

/*
    Viene esaminata la prima stringa, se il carattere alla posizione i della
    prima stringa non è un caratetere vuoto (' ') allora viene trasferito nel
    secondo array di char per formare la stringa senza spazi.
*/

void removeSpaces(char stringa[], char stringaSenzaSpazi[]) {
    int indice = 0;

    for(size_t i = 0; i < SIZE; i++) {
        if(stringa[i] != ' ') {
            stringaSenzaSpazi[indice] = stringa[i];
            indice++;
        }
    }
}

/*
    Viene esaminata ricorsivamente la string aper controllare
    se è palindroma.
*/

int testPalindrome(char stringa[], int partenza, int dimensione) {
    if(dimensione == 0 || dimensione == 1) {
        return 1;
    } else {
        if(stringa[partenza] == stringa[dimensione - 1]) {
            return testPalindrome(stringa, partenza + 1, dimensione - 1);
        } else {
            return 0;
        }
    }
}