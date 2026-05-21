#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void funk() {
    int i = 0;
    char kleinbuchstaben[40];

    while(i < 40) {
        scanf("%c", &kleinbuchstaben[i]);

        if (kleinbuchstaben[i] == '\n') {   // ENTER gedrückt
            break;
        }

        if (kleinbuchstaben[i] >= 'a' && kleinbuchstaben[i] <= 'z') {
            i++;
        }
    }

    printf("%d Kleinbuchstaben", i);
}

int main() {
    funk();
    return 0;
}
