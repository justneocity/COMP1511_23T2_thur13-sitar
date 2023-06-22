#include <stdio.h>

#define SIZE 1000

int main(void) {

    // declare array
    int array[SIZE] = {0};

    // scan until control D
    // i increments index to store into array
    // by the end of loop, i represents size of array
    int var;
    int i = 0;
    while (scanf("%d", &var) == 1) {
        array[i] = var;
        i++;
    }

    // print array until where user entered in values
    int j = 0;
    while (j < i) {
        printf("%d\n", array[j]);
        j++;
    }

    return 0;
}