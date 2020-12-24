/*
    Usate un array unidimensionale per risolvere il seguente problema. una
    compagnia paga i suoi agenti di vendita su commissione. Gli agenti di vendita
    ricevono $200 alla settimana più il 9% delle loro vendite lorde per quella
    settimana. Ad esempio, un agente di vendita che ottiene un introito lordo sulle
    vendite di $3000 in una settimana riceve $200 più il 9% di $3000, ovvero un totale
    di $470. Scrivete un programma in C (usando un array di contatori) che determini
    quanti agenti di vendita hanno avuto i loro guadagni in ognuno dei seguenti intervalli:
    a) $220 - 299
    b) $300 - 399
    c) $400 - 499
    d) $500 - 599
    e) $600 - 699
    f) $700 - 799
    g) $800 - 899
    h) $900 - 999
    i) $1000 e oltre
*/

#include <stdio.h>
#define SIZE 9

void aumentaContatore(int guadagni[], double totale);
void stampaArray(const int array[]);

int main(void) {
    int contatoreGuadagni[SIZE] = {0};
    double venditeLorde;
    double totale = 0;

    puts("Inserisci le tue vendite lorde della settimana: (-1 per fermarti)");
    scanf("%lf", &venditeLorde);

    while(venditeLorde != -1) {
        totale = 200 + (0.09 * venditeLorde);
        aumentaContatore(contatoreGuadagni, totale);
        puts("Inserisci le tue vendite lorde della settimana: (-1 per fermarti)");
        scanf("%lf", &venditeLorde);
    }

    stampaArray(contatoreGuadagni);
}

void aumentaContatore(int guadagni[], double totale) {
    if(totale >= 200 && totale <= 299) {
        guadagni[0]++;
    } else if(totale >= 300 && totale <= 399) {
        guadagni[1]++;
    } else if(totale >= 400 && totale <= 499) {
        guadagni[2]++;
    } else if(totale >= 500 && totale <= 599) {
        guadagni[3]++;
    } else if(totale >= 600 && totale <= 699) {
        guadagni[4]++;
    } else if(totale >= 700 && totale <= 799) {
        guadagni[5]++;
    } else if(totale >= 800 && totale <= 899) {
        guadagni[6]++;
    } else if(totale >= 900 && totale <= 999) {
        guadagni[7]++;
    } else {
        guadagni[8]++;
    }
}

void stampaArray(const int array[]) {
    for(size_t i = 0; i < SIZE; i++) {
        printf("%d \n", array[i]);
    }
}

