#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char geschlecht;
    float gewicht, volumen, alkoholgehalt;
    float verteilungsfaktor, alkoholmasse, promille;
    const float dichte = 0.8;

    // Eingabe: Geschlecht, Gewicht, Volumen, Alkoholgehalt
    scanf(" %c %f %f %f", &geschlecht, &gewicht, &volumen, &alkoholgehalt);

    // Verteilungsfaktor bestimmen
    if (geschlecht == 'm')
        verteilungsfaktor = 0.7;
    else if (geschlecht == 'w')
        verteilungsfaktor = 0.6;
    else if (geschlecht == 'k')
        verteilungsfaktor = 0.8;
    else
        verteilungsfaktor = 0.7; // Standardwert für unbekannt

    // Alkoholmasse berechnen: A = V * e * φ
    alkoholmasse = volumen * alkoholgehalt / 100.0 * dichte;

    // Promille berechnen: w = A / (m * r)
    promille = alkoholmasse / (gewicht * verteilungsfaktor);

    // Ausgabe mit zwei Nachkommastellen
    printf("%.2f Promille\n", promille);

    return 0;
}

