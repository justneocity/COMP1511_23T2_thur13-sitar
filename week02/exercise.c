#include <stdio.h>

int main(void) {

    int a;
    int b;

    // scan in integers
    scanf("%d %d", &a, &b);

    // If the first integer is less than the second, print out a short error message.
    // If the second integer is 0, print out a different short error message.
    // If the first integer is larger than the second, prints `a / b` and `(a * 1.0) / (b * 1.0)`
    if (a < b) {
        printf("error 1\n");
    } else if (b == 0) {
        printf("error2\n");
    } else if (a > b) {
        int num = a / b;
        double num2 = (a * 1.0)/ (b * 1.0);
        printf("%d, %.2lf", num, num2);
    }

    return 0;
}