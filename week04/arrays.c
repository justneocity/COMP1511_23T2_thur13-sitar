#include <stdio.h>

#define SIZE 5

int main(void) {

    /*
    // declaring and initialising an array
    int nums[5] = {1, 2, 3, 4, 5};
    int nums2[] = {1, 2, 3, 4, 5};
    int nums3[5] = {0}; // {0,0,0,0,0}
    double double_nums[5] = {0.0};
    int my_array[10];
    */

    

    // 1. Create an integer array with at least 5 elements.
    int nums[SIZE] = {1, 2, 3, 4, 5};

    // 2. Create a while loop which loops through every element of the array.
    int i = 0;
    while (i < SIZE) {
        // 3. Write an `if` statement which adds 1 to each **even** value. Do this within the `while` loop.
        if (nums[i] % 2 == 0) {
            nums[i] = nums[i] + 1;        
        }
        i++;
    }

    // 4. Write another while loop which goes through the array *with a different iterator* (i.e. if you used `i` last time, use `j`)
    // 5. Print out the values in the array.

    int j = 0;
    while (j < 5) {
        printf("%d\n", nums[j]);
        j++;
    }

   
    
}
