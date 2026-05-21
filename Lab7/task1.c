#include <stdio.h>

int main(int argc, char *argv[]) {

    int value = 42;
    
    int *hal = &value;
    printf("%d\n", *hal);

    *hal = 85;
    printf("%d\n", *hal);

    (*hal)++; // inkrementieren
    printf("%d\n", *hal);

    return 0;
}