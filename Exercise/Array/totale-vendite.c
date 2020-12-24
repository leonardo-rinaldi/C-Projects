/*
    Usate un array con doppio indice per risolvere il seguente problema.
    Un'azienda ha quattro agenti di vendita (da 1 a 4) che vendono cinque
    differenti prodotti (da 1 a 5). Una volta al giorno, ogni agente di
    vendita consegna una distinta per ogni tipo differente di prodotto 
    venduto. Ogni distinta contiene:
    a) il numero dell'agente di vendita
    b) il numero del prodotto
    c) il valore totale in dollari di quel prodotto venduto quel giorno.
    In questo modo, ogni agente consegna tra 0 e 5 distinte di vendita al 
    giorno. Supponete che siano disponibili le informazioni contenute in
    tutte le distinte dell'ultimo mese. Scrivete un programma che legga
    queste informazioni per le vendite dell'ultimo mese e riepiloghi le 
    vendite totali per agente di vendita e per prodotto. Tutti i totali
    devono essere memorizzati nell'array bidimensionale sales. Dopo aver 
    elaborato tutte le informazioni per l'ultimo mese, stampate i risultati.
*/

#include <stdio.h>
#define AGENTI 4
#define PRODOTTI 5

void stampaArray(double sales[][PRODOTTI]);
void stampaTotaleAgente(double sales[][PRODOTTI]);

int main(void) {
    double sales[AGENTI][PRODOTTI] = {0};
    int contatore = 0;
    int numeroAgente;
    int numeroProdotto;
    double valoreProdotto;
    double valoreTotale = 0;

    while(contatore < AGENTI * PRODOTTI) {
        puts("Inserisci il numero dell'agente");
        scanf("%d", &numeroAgente);
        puts("Inserisci il numero del prodotto");
        scanf("%d", &numeroProdotto);
        puts("Inserisci il valore del prodotto");
        scanf("%lf", &valoreProdotto);
        sales[numeroAgente][numeroProdotto] = valoreProdotto;
        valoreTotale += valoreProdotto;
        contatore++;
    }
    stampaArray(sales);
    stampaTotaleAgente(sales);
}

void stampaArray(double sales[][PRODOTTI]) {
    for(size_t x = 0; x < AGENTI; x++) {
        for(size_t y = 0; y < PRODOTTI; y++) {
            printf("%.2lf ", sales[x][y]);
        }
        puts("");
    }
}

void stampaTotaleAgente(double sales[][PRODOTTI]) {
    for(size_t x = 0; x < AGENTI; x++) {
        double totaleRiga = 0;
        for(size_t y = 0; y < PRODOTTI; y++) {
            totaleRiga += sales[x][y];
        }
        printf("Il totale dell'agente %lu è %.2lf \n", x + 1, totaleRiga);
    }
}
