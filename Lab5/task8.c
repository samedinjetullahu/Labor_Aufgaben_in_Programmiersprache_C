#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Vorwärtsdeklaration der Funktionen
int einlesen(float Noten[]);
float berechnen(float Noten[], int anzahl);
void ausgeben(float Durchschnitt, int anzahl);


int main() 
{
    float noten[10];
    int anzahl;
    float durchschnitt;

    anzahl = einlesen(noten);
    durchschnitt = berechnen(noten, anzahl);
    ausgeben(durchschnitt, anzahl);
    
    return 0;
}

int einlesen(float noten[])
{
    int i = 0;
    float note;

    while (i < 10) {
        if (scanf("%f", &note) != 1) {
            break;  // Eingabefehler (z. B. Buchstaben)
        }

        if (note < 1.0f || note > 6.0f) {
            break;  // ungültige Note → Eingabe beenden
        }

        noten[i] = note;
        i++;
    }

    return i;  // Anzahl gültiger Noten
}

float berechnen(float noten[], int anzahl)
{   
    if (anzahl == 0) {
        return 0;   // ganz wichtig!
    }

    float summe = 0.0f;

    for (int i = 0; i < anzahl; i++) {
        summe += noten[i];
    }

    return summe / anzahl;
}

void ausgeben(float durchschnitt, int anzahl)
{
    // Notenanzahl und Durchschnitt ausgeben
    printf("Durchschnitt (N=%d): %0.2f", anzahl, durchschnitt);
}