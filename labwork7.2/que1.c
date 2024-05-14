#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print spaces before the numbers
        for (int j = 1; j <= rows - i; j++) {
            printf("   ");
        }

        // Print the numbers in descending order
        for (int k = i; k >= 1; k--) {
            printf("%2d ", k);
        }

        printf("\n");
    }

    return 0;
}
