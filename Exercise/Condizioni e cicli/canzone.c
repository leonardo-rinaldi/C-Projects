/*
    Scrivete un programma che utilizzi le istruzioni di iterazione
    e l'istruzione switch per stampare la canzone "The Twelve Days of
    Christmas". Va usata una sola istruzione switch per stampare il giorno
    (cioè, "first", "second", ecc.). Dovete poi usare un'istruzione switch
    separata per stampare il resto di ogni verso.
*/

#include <stdio.h>

int main(void) {

    for(unsigned int i = 1; i <= 12; i++) {
        switch(i) {
            case 1:
                puts("On the first day of Christmas");
                break;
            case 2:
                puts("On the second day of Christmas");
                break;
            case 3:
                puts("On the third day of Christmas");
                break;
            case 4:
                puts("On the fourth day of Christmas ");
                break;
            case 5:
                puts("On the fifth day of Christmas ");
                break;
            case 6:
                puts("On the sixth day of Christmas");
                break;
            case 7:
                puts("On the seventh day of Christmas");
                break;
            case 8:
                puts("On the eighth day of Christmas ");
                break;
            case 9:
                puts("On the ninth day of Christmas");
                break;
            case 10:
                puts("On the tenth day of Christmas");
                break;
            case 11:
                puts("On the eleventh day of Christmas ");
                break;
            case 12:
                puts("On the twelfth day of Christmas");
                break;
        }

        switch(i) {
            case 1:
                puts("My true love sent to me:");
                puts("A partridge in a pear tree.");
                break;
            case 2:
                puts("My true love sent to me: ");
                puts("Two turtle doves");
                puts("And a Partridge in a pear tree.");
                break;
            case 3:
                puts("My true love sent to me:");
                puts("Three French Hens,");
                puts("Two turtle doves");
                puts("And a Partridge in a pear tree.");
                break;
            case 4:
                puts("My true love sent to me:");
                puts("Four calling birds,");
                puts("Three French Hens, ");
                puts("Two turtle doves ");
                puts("And a Partridge in a pear tree");
                break;
            case 5:
                puts("My true love sent to me:");
                puts("Five golden rings, ");
                puts("Four calling birds,");
                puts("Three French Hens, ");
                puts("Two turtle doves ");
                puts("And a Partridge in a pear tree");
                break;
            case 6:
                puts("My true love sent to me:");
                puts("Six geese a laying, ");
                puts("Five golden rings, ");
                puts("Four calling birds,");
                puts("Three French Hens, ");
                puts("Two turtle doves ");
                puts("And a Partridge in a pear tree");
                break;
            case 7:
                puts("My true love sent to me:");
                puts("Seven swans a swimming, ");
                puts("Six geese a laying, ");
                puts("Five golden rings, ");
                puts("Four calling birds,");
                puts("Three French Hens, ");
                puts("Two turtle doves ");
                puts("And a Partridge in a pear tree");
                break;
            case 8:
                puts("My true love sent to me:");
                puts("Eight maids a milking, ");
                puts("Seven swans a swimming, ");
                puts("Six geese a laying, ");
                puts("Five golden rings, ");
                puts("Four calling birds,");
                puts("Three French Hens, ");
                puts("Two turtle doves ");
                puts("And a Partridge in a pear tree");
                break;
            case 9:
                puts("My true love sent to me:");
                puts("Nine ladies dancing, ");
                puts("Eight maids a milking, ");
                puts("Seven swans a swimming, ");
                puts("Six geese a laying, ");
                puts("Five golden rings, ");
                puts("Four calling birds,");
                puts("Three French Hens, ");
                puts("Two turtle doves ");
                puts("And a Partridge in a pear tree");
                break;
            case 10:
                puts("My true love sent to me:");
                puts("Ten lords a leaping, ");
                puts("Nine ladies dancing, ");
                puts("Eight maids a milking, ");
                puts("Seven swans a swimming, ");
                puts("Six geese a laying, ");
                puts("Five golden rings, ");
                puts("Four calling birds,");
                puts("Three French Hens, ");
                puts("Two turtle doves ");
                puts("And a Partridge in a pear tree");
                break;
            case 11:
                puts("My true love sent to me:");
                puts("Eleven pipers piping, ");
                puts("Ten lords a leaping, ");
                puts("Nine ladies dancing, ");
                puts("Eight maids a milking, ");
                puts("Seven swans a swimming, ");
                puts("Six geese a laying, ");
                puts("Five golden rings, ");
                puts("Four calling birds,");
                puts("Three French Hens, ");
                puts("Two turtle doves ");
                puts("And a Partridge in a pear tree");
                break;
            case 12:
                puts("My true love sent to me:");
                puts("Twelve drummers drumming, ");
                puts("Eleven pipers piping, ");
                puts("Ten lords a leaping, ");
                puts("Nine ladies dancing, ");
                puts("Eight maids a milking, ");
                puts("Seven swans a swimming, ");
                puts("Six geese a laying, ");
                puts("Five golden rings, ");
                puts("Four calling birds,");
                puts("Three French Hens, ");
                puts("Two turtle doves ");
                puts("And a Partridge in a pear tree");
                break;
        }
    }
}