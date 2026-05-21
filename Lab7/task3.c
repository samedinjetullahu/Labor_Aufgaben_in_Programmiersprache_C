#include <stdio.h>

int main() {
    int array[5];
    int i;
    int Summe = 0;
    float Durchschnitt = 0.0;

    //Schleife um die 4 Zahlen zu lesen
    for(i = 0; i < 4; i++) {
        scanf("%d", &array[i]);
    }

    //Schleife um die Zahlen zusammen zu addieren
    for(i= 0; i < 4; i++) {
        Summe += array[i];
    }

    //Summe in float umwandeln damit wir Zahlen mit Nachkommastellen bekommen und durch 4 teilen
    Durchschnitt = (float)Summe / 4;

    //Die Summe ausgeben
    printf("Summe: %d\n", Summe);
    printf("Durchschnitt: %0.6f", Durchschnitt);

    return 0;
}