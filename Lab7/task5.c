#include <stdio.h>

int main() {
    //Definition einer Variablen i vom Typ int
    int i;

    //Definition eines Pointers ptr auf den Typ int
    int* ptr;

    //Definition eines Pointers ptrptr auf einen int-Pointer
    int **ptrptr;

    //Zuweisung der Adresse von i an den Pointer ptr
    ptr = &i;

    //Zuweisung der Adresse von ptr an den Pointer ptrptr
    ptrptr = &ptr;

    //Zuweisung des Wertes 1 an die Variable i
    i = 1;

    //Ausgabe des Werts von i
    printf("%d\n", i);

    //Ausgabe des Werts des Objekts, auf das der Pointer ptr zeigt, mithilfe des Dereferenzierungsoperators
    printf("%d\n", *ptr);
    //Zuweisung des Werts 2 auf i, aber über den Dopplerpointer ptrptr (NICHT direkt!)
    **ptrptr = 2;
    //Ausgabe des Wertes von i, aber ebenfalls über den Dopplerpointer ptrptr (NICHT direkt!)
    printf("%d\n", **ptrptr);
    
    return 0;
}