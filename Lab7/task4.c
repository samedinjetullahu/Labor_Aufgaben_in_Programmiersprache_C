#include <stdio.h>

int main() {
    int array[5];
    int i;

    //Schleife um die 4 Zahlen zu lesen
    for(i = 0; i < 4; i++) {
        scanf("%d", &array[i]);
    }

    //Schleife zum Ausgeben der 4 Zahlen
    for(i = 0; i < 4; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    //Jetzt ändern wir die dritte Stelle auf 42
    int *ptr = &array[2];
    *ptr = 42;

    //Schleife um die Zahlen wieder auszugeben
    for(i = 0; i < 4; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}