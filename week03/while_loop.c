#include <stdio.h>

int main(void) {

    // 4 KEY Parts of a loop

    // 1. INITIALISATION
    int i;

    // 2. CONDITION
    while (i < 10) {

    // 3. BODY 
        printf("hello %d\n", i);    

    // 4. INCREMENTATION
        i = i + 1;
        // i++;
    }

    return 0;
}