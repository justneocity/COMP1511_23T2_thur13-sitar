#include <stdio.h>

#define SIZE 7

double scan_into_array(double temps[7]);
void print_average(double sum);

int main(void) {

    // 1. create a double array of 7 elements
    double my_array[7] = {0.0};

    // i can pass variables of different names, 
    // but !same type! as the function argument
    int sum = scan_into_array(my_array);
   
    // 4. void function to print average
    print_average(sum);

    return 0;
}

// function to scan into array and calculate sum
// of all values scanned in
// @param temps - array of doubles
double scan_into_array(double temps[7]) {
    double sum = 0;
    // 2. while loop with scanf to insert into array
    // 3. loop through to sum each value
    int i = 0;
    while (i < 7) {
        scanf("%lf", &temps[i]);
        sum += temps[i];
        i++;
    }
    return sum;
}

// prints average give sun
// @param sum: sum of all values in array
void print_average(double sum) {
    double average = sum / 7;
    printf("%.2lf\n", average);
}
