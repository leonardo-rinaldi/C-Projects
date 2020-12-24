/*
    Una piccola compagnia aerea ha appena acquistato un computer per il suo nuovo sistema
    automatico di prenotazione. Il presidente vi ha chiesto di programmare il nuovo sistema.
    Scrivete un programma per assegnare i posti su ogni volo dell'unico aereo della compagnia
    (capacità 10 posti). Il vostro programma deve stampare il seguente menu di alternative:
    
    Please type 1 for the first class
    Please type 2 for the second class

    Se la persona scrive 1, allora il vostro programma deve assegnare un posto in prima classe
    (posti da 1 a 5). Se la persona scrive 2, allora il vostro programma deve assegnare un posto
    in classe economy (posti da 6 a 10). Il vostro programma deve quindi stampare una carta d'imbarco
    indicante il numero del posto della persona e se questo si trova in prima classe o in classe
    economy.
    Usate un array unidimensionale per rappresentare la mappa dei posti dell'aereo. Inizializzate
    tutti gli elementi dell'array a 0 per indicare che tutti i posti sono vuoti. Quando ogni posto
    viene assegnato, ponete l'elemento corrisponedente dell'array a 1 per indicare che il posto non
    è più disponibile.
*/

#include <stdio.h>
#define CAPACITA 10

int prenotaViaggio(int posti[]);

int main(void) {
    int posti[CAPACITA] = {0};
    int postoScelto;
    postoScelto = prenotaViaggio(posti);

    printf("The seat is the number %d. \n", postoScelto + 1);

    if(postoScelto + 1 <= 5) {
        puts("The seat is in the first class.");
    } else {
        puts("The seat is in the second class.");
    }

}
int prenotaViaggio(int posti[]) {
    int postoPrenotato;
    int posto;
    puts("Please type 1 for first class");
    puts("Please type 2 for economy");
    scanf("%d", &postoPrenotato);

    if(postoPrenotato == 1) {
        for(size_t i = 0; i < 5; i++) {
            if(posti[i] == 0) {
                posti[i] = 1;
                posto = i;
                break;
            }
        }
    } else {
        for(size_t i = 5; i < 10; i++) {
            if(posti[i] == 0) {
                posti[i] = 1;
                posto = i;
                break;
            }
        }
    }
    return posto;
}