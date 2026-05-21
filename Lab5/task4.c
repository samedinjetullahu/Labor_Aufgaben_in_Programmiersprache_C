#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void vokale() {
    char str[40];
    char vowel;
    int i = 0;
    scanf(" %c %s", &vowel, str);

    while(i < 40 && str[i] != '\n') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = vowel;
        }
        i++;
    }

    printf("%s", str);
}

int main() {
    vokale();
    return 0;
}
