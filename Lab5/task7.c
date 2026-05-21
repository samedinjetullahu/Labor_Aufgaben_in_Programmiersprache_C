#include <stdio.h>

void funktion() {
    char array[40];
    scanf("%s", array);

    int len = 0;
    while(array[len] != '\0')
    {
        len++;
    }

    for(int i = len - 1; i >= 0; i--) {
        printf("%c", array[i]);
    }
}

int main() {
    funktion();
    return 0;
}