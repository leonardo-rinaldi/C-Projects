/*
    Un rivenditore on-line vende cinque differenti prodotti i cui prezzi al
    dettaglio sono mostrati nella seguente tabella:

    Numero del prodotto     Prezzo al dettaglio
    1                       $2,98
    2                       $4,50
    3                       $9,98
    4                       $4,49
    5                       $6,87

    Scrivete un programma che legga una serie di coppie di numeri come segue:
    a) Numero del prodotto
    b) Quantità venduta in un giorno

    Il vostro programma deve usare un'istruzione switch per permettervi di
    determinare il prezzo al dettaglio per ogni prodotto. Inoltre deve calcolare 
    e stampare il valore al dettaglio totale di tutti i prodotti venduti nell'ultima
    settimana. 
*/

#include <stdio.h>

int main(void) {
    int prodottoSelezionato;
    double prezzoTotale = 0;
    int quantitàVenduta;

    for(unsigned int i = 1; i <= 7; i++) {

        puts("Inserisci un numero intero tra 1 e 5 per selezionare un prodotto:");
        scanf("%d", &prodottoSelezionato);
        puts("Inserisci la quantità venduta:");
        scanf("%d", &quantitàVenduta);

        switch(prodottoSelezionato) {
            case 1:
                prezzoTotale += 2.98 * quantitàVenduta;
                break;
            case 2:
                prezzoTotale += 4.50 * quantitàVenduta;
                break;
            case 3:
                prezzoTotale += 9.98 * quantitàVenduta;
                break;
            case 4:
                prezzoTotale += 4.49 * quantitàVenduta;
                break;
            case 5:
                prezzoTotale += 6.87 * quantitàVenduta;
                break;
            default:
            puts("Prodotto non disponibile;");
        }
    }
    printf("Il totale di questa settimana è: %.2lf$\n", prezzoTotale);
}