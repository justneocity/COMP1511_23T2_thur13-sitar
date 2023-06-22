#include <stdio.h>

int main(void) {

    // 1. Create an array of doubles with 3 elements, each with a non-zero value.
    double arr[3] = {1.1, 2.1, 3.1};

    // 2. Create another array of doubles with 10 elements where every element initialised to `0.0`.
    double arr2[10] = {0.0};

    // 3. Create a while loop that loops through every element of the first array.
    // 4. Copy the elements of the first array into the second array (leave 0's at the end)
    int i = 0;
    while (i < 3) {
        arr2[i] = arr[i];
        i++;
    }
    // 5. Create a while loop that prints out all the elements of the second array.
    int j = 0;
    while (j < 10) {
        printf("%.2lf", arr2[j]);
        j++
    }

    return 0;
}