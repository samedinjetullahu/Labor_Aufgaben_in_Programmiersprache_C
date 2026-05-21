#include <stdio.h>

void funktion() {
    char voll[40];
    int start;
    int end;
    char teil[40];

    scanf("%s %d %d", voll, &start, &end);

    int j = 0;

    for(int i = start; i <= end; i++) {
        teil[j] = voll[i];
        j++;
    }

    teil[j] = '\0';

    printf("%s %d-%d: %s", voll, start, end, teil);
}

int main() {
    funktion();
    return 0;
}