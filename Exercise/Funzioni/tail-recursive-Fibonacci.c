/*
    Tail recursive version of Fibonacci
    Versione ricorsiva di coda di Fibonacci
*/

#include <stdio.h>

int fibonacci(int n, int a, int b);

int main(void) {
    printf("%d \n", fibonacci(4, 0, 1));
    printf("%d \n", fibonacci(5, 0, 1));

}

int fibonacci(int n, int a, int b) {
    if(n == 0) {
        return a;
    } else 
    if(n == 1) {
        return b;
    } else {
        return fibonacci(n-1, b, a+b);
    } 
}