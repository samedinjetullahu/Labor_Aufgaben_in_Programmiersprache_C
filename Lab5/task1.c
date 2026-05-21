#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double vier() {

    double komponenten[4];

    for(int i = 0; i < 4; i++) {
        scanf("%lf", &komponenten[i]);
    }

    double min = komponenten[0];
    int minIndex = 0;

    for(int i = 0; i < 4; i++) {
        if(min > komponenten[i]) {
            min = komponenten[i];
            minIndex = i;
        }
    }
    printf("Kleinste Zahl: %0.1lf an Index %d\n", min, minIndex);
    return min;
} 

int main(int argc, char *argv[]) {
    vier();
    return 0;
}