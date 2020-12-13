/*
    Una grande compagnia chimica paga il suo personale addetto alle vendite
    su commissione. Il personale addetto alle vendite riceve 200 dollari alla
    settimana più il 9% delle vendite lorde per quella settimana. Ad esempio, 
    un addetto alle vendite che vende 5000 dollari di prodotto chimici in una
    settimana riceve 200 dollari più il 9% di 5000, cioè un totale di 650 dollari.
    Svillupate un programma che legga le vendite lorde di ogni addetto alle vendite
    nell'ultima settimana e calcoli e stampi i guadagni di quell'addetto. Elaborate i
    dati di ogni addetto alla volta. Ecco un esempio di dialogo di input/output:

    Enter sales in dollars (-1 to end): 5000.00
    Salary is: $650.00

    Enter sales in dollars (-1 to end): 1234.56
    Salary is: $311.11

    Enter sales in dollars (-1 to end): -1
*/

#include <stdio.h>

int main(void) {
    double vendite = 0;
    double salario = 0;

    puts("Enter sales in dolars (-1 to end):");
    scanf("%lf", &vendite);

    while(vendite != -1) {
        salario = 200 + (vendite * 0.09);
        printf("Salary is: %.2lf \n", salario);

        vendite = 0;
        salario = 0;
        puts("Enter sales in dolars (-1 to end):");
        scanf("%lf", &vendite);
    }
}