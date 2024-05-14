#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern
    
    for (int i = 1; i <= rows; i++) {
        // Print spaces before each number
        for (int j = 1; j <= (rows - i); j++) {
            printf("   ");
        }
        
        // Print the number i 'i' times
        for (int k = 1; k <= i; k++) {
            printf("%d ", i);
        }
        
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}
