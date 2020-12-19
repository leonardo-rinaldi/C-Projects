/*
    Implementare le seguenti funzioni:
    a)  La funzione toCelsius restituisce l'equivalente in gradi celsius di una
        temperatura in gradi Fahrenheit.
    b)  La funzione toFahrenheit restituisce l'equivalente in gradi Fahrenheit di
        una temperatura in gradi Celsius.
    c)  Usate queste funzioni per scrivere un programma che stampi diagrammi che
        mostrino gli equivalenti gradi Fahrenheit di tutte le temperature in gradi
        Celsius da 0 a 100 gradi e gli equivalenti gradi Celsius di tutte le 
        temperature in gradi Fahreheit da 32 a 212 gradi.
*/

#include <stdio.h>

double toCelsius(double temperaturaFahrenheit);
double toFahrenheit(double temperaturaCelsius);

int main(void) {
    printf("%s","Gradi Celsius");
    printf("%23s \n","Gradi Fahrenheit");

    for(unsigned int i = 1; i <= 100; i++) {
       printf("%u", i);
       printf("%25.2lf \n", toFahrenheit(i));
    }

    puts("");
    printf("%s","Gradi Fahrenheit");
    printf("%19s \n","Gradi Celsius");

    for(unsigned int i = 32; i <= 212; i++) {
       printf("%u", i);
       printf("%25.2lf \n", toCelsius(i));
    }
}

double toCelsius(double temperaturaFahrenheit) {
    double temperaturainCelsius;

    temperaturainCelsius = (temperaturaFahrenheit - 32) / 1.8;
    return temperaturainCelsius;
}

double toFahrenheit(double temperaturaCelsius) {
    double temperaturaFahrenheit;

    temperaturaFahrenheit = 1.8 * temperaturaCelsius + 32;
    return temperaturaFahrenheit;
}
