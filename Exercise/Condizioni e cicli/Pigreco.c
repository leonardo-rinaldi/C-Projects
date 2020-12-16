/*

*/

#include <stdio.h>

int main(void) {
    double pigreco = 4;
    int valoreLimite = 11;

    for(unsigned int i = 3; i <= valoreLimite; i += 4) {
        double valoreProvvisorio = (4/i) + (4/ i+2);
        pigreco -= valoreProvvisorio;
    }
}