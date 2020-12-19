/*
    La serie di Fibonacci
    0, 1, 1, 2, 3, 5, 8, 13, 21, ...
    inizia con i termini 0 e 1 e ha la proprietà che ogni termine che segue è la somma
    dei due termini precedenti. Scrivete una funzione fibonacci(n) non ricorsiva che
    calcoli l'n^mo numero di Fibonacci. Usate unsigned int per il parametro della
    funzione e unsigned long long int per il suo tipo di ritorno.
*/

#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main(void) {
    printf("%llu \n",fibonacci(0));
    printf("%llu \n",fibonacci(1));
    printf("%llu \n",fibonacci(2));
    printf("%llu \n",fibonacci(3));
    printf("%llu \n",fibonacci(4));
    printf("%llu \n",fibonacci(8));
}

unsigned long long int fibonacci(unsigned int n) {
    int fibonacci;
    int fib1 = 0;
    int fib2 = 1;

    if(n == 0) {
        fibonacci = fib1;
    } else
    if(n == 1) {
        fibonacci = fib2;
    } else {
        for(unsigned int i = 2; i <= n; i++) {
            fibonacci = fib1 + fib2;    //calcolo di fibonacci (n - 1) + (n - 2)
            fib1 = fib2;                //nel passo successivo fib1 -> (n - 1) diventa fib2 -> (n - 2)
            fib2 = fibonacci;           //nel passo successivo  fibonacci -> il numero ottenuto diventa fib2 -> (n - 2)
        }
    }
    return fibonacci;
}
