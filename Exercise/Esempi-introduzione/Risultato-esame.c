/*
    Modificate il programma della figura 3.10 per convalidare i suoi input.
    Per qualunque input, se il valore inserito è diverso da 1 o da 2, continuate
    l'iterazione finchè l'utente non inserisce un valore corretto.

#include <stdio.h>

int main(void) {
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result;

    while(student <= 10) {
        printf("%s", "Enter result (1=pass,2=fail): ");
        scanf("%d", &result);

        if(result == 1) {
            passes = passes + 1;
            student = student + 1;
        } else {
            failures = failures + 1;
            student = student + 1;
        } 
    }

    printf("Passed %u\n", passes);
    printf("Failed %u\n", failures);

    if(passes > 8) {
        puts("Bonus to instructor!");
    }
}
*/

#include <stdio.h>

int main(void) {
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result;

    while(student <= 10) {
        printf("%s", "Enter result (1=pass,2=fail): ");
        scanf("%d", &result);

        if(result == 1) {
            passes = passes + 1;
            student = student + 1;
        } else 
            if(result == 2){
            failures = failures + 1;
            student = student + 1;
        } else {
            printf("%s", "Enter result (1=pass,2=fail): ");
            scanf("%d", &result);
        }
    }

    printf("Passed %u\n", passes);
    printf("Failed %u\n", failures);

    if(passes > 8) {
        puts("Bonus to instructor!");
    }
}