#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void vokale() {
    char vokale[40];
    int i = 0;

    while(i < 40) {
        scanf("%c", &vokale[i]);

        if (vokale[i] == '\n') {   // ENTER gedrückt
            break;
        }

        if (vokale[i] == 'a' || vokale[i] == 'e' || vokale[i] == 'i' || vokale[i] == 'o' || vokale[i] == 'u' ||
            vokale[i] == 'A' || vokale[i] == 'E' || vokale[i] == 'I' || vokale[i] == 'O' || vokale[i] == 'U') {
            i++;
        }
    }

    printf("%d Vokale", i);
}

int main() {
    vokale();
    return 0;
}
