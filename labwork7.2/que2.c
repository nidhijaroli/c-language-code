#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print spaces before the numbers
        for (int j = 1; j <= rows - i; j++) {
            printf("   ");
        }

        // Print the numbers
        for (int k = i; k <= rows; k++) {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
