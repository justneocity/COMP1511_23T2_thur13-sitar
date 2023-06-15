#include <stdio.h>

int main(void) {

    // 4 KEY Parts of a loop

    // 1. INITIALISATION
    int row = 0;

    // 2. CONDITION
    while (row < 10) {
        // initialise column for new while loop
        int col = 0;
        while (col < 5) {
            if (row == col) {
                printf("O");
            } else {
                printf("X");
            }
            // increment for 2nd loop
            col++;
        }
        // increment for first loop
        row++;
        printf("\n");
    }

    return 0;
}