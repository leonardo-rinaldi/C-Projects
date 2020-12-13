/*
    Sviluppare un programma in C per determinare se un cliente di un grande
    magazzino ha superato il limite di credito sul suo conto di adebito. Per
    ogni cliente sono a disposizione i seguenti dati:
    a) Numero di conto
    b) Saldo all'inizio del mese
    c) Totale delle voci addebitate sul conto del cliente nel mese
    d) Totale dei crediti applicati nel mese al conto del cliente
    e) Limite di credito concesso

    Il programma deve leggere tali dati, calcolare il nuovo saldo (= saldo iniziale +
    addebiti - crediti) e determinare se il nuovo saldo supera il limite di credito del
    cliente. Per quei clienti il cui limite di credito è superato, il programma deve stampare
    il numero del conto del cliente, il limite di credito, il nuovo saldo e il messaggio "Limite
    di credito superato.".
*/

#include <stdio.h>

int main(void) {
    int numeroConto;
    double saldoInizioMese;
    double totaleAddebiti;
    double totaleCrediti;
    double limiteCredito;
    double nuovoSaldo;

    puts("Enter account number (-1 to end):");
    scanf("%u", &numeroConto);

    while(numeroConto != -1) {
        nuovoSaldo = 0;

        puts("Enter beginning balance:");
        scanf("%lf", &saldoInizioMese);
        puts("Enter total charges:");
        scanf("%lf", &totaleAddebiti);
        puts("Enter total credits:");
        scanf("%lf", &totaleCrediti);
        puts("Enter credit limit:");
        scanf("%lf", &limiteCredito);

        nuovoSaldo = saldoInizioMese + totaleAddebiti - totaleCrediti;
        if(nuovoSaldo > limiteCredito) {
            printf("Account: %d \n", numeroConto);
            printf("Credit limit: %.2lf \n", limiteCredito);
            printf("Balance: %.2lf \n", nuovoSaldo);
            puts("Credit Limit Exceeded.");
        }

        puts("Enter account number (-1 to end):");
        scanf("%u", &numeroConto);
    }
}