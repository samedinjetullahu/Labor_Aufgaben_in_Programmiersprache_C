#include <stdio.h>

int main() {
    char array[41];
    int i;

    //Schleife zum Einlesen des Strings
    for(i = 0; i < 40; i++) {
        scanf("%c", &array[i]);

        //IF-Bedingung um die Eingabe zu stoppen, wenn man halt Enter drückt
        if(array[i] == '\n')
            break;
    }

    //Zum terminieren, nicht das der compiler 
    //Müll ausgibt nachdem das was wir eingegeben haben, fertig ist
    array[i] = '\0';

    //Schleife zum Ausgeben des Strings
    for(i = 0; array[i] != '\0'; i++) {
        printf("%c", array[i]);
    }

    return 0;
}