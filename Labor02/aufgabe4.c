#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Eingabe vom Benutzer
    scanf("%f", &fahrenheit);

    // Berechnung nach der Formel: (5 * (Fahrenheit - 32)) / 9
    celsius = (5 * (fahrenheit - 32)) / 9;

    // Ausgabe mit genau einer Nachkommastelle
    printf("%.1f Grad Fahrenheit = %.1f Grad Celsius\n", fahrenheit, celsius);

    return 0;
}
