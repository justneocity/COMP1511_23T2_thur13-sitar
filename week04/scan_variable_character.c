#include <stdio.h>

int main(void) {
    
    // scan a character until Control D
    char character; 
    while (scanf(" %c", &character) == 1){

        printf("%c\n", character);
    }
    
    return 0;
}