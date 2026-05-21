#include <stdio.h>

void er() {
    char string[40];
    int i = 0;

    scanf("%s", string);

    while(i < 40 && string[i] != '\0') {
        if(string[i] >= 'A' && string[i] <= 'Z') {
            string[i] = string[i] + 32;
        }
        else if(string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 32;
        }
        i++;
    }

    printf("%s", string);
}

int main() {
    er();
    return 0;
}