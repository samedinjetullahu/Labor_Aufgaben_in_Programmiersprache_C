#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float gewicht_gramm, groesse_cm;
    float gewicht_kg, groesse_m, bmi;

    // Eingabe: Gewicht in Gramm und Größe in Zentimetern
    scanf("%f %f", &gewicht_gramm, &groesse_cm);

    // Umrechnung in Kilogramm und Meter
    gewicht_kg = gewicht_gramm / 1000.0;
    groesse_m = groesse_cm / 100.0;

    // BMI-Berechnung
    bmi = gewicht_kg / (groesse_m * groesse_m);

    // Ausgabe mit zwei Nachkommastellen
    printf("Der BMI liegt bei: %.2f!\n", bmi);

    return 0;
}
