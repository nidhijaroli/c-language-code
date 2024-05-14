#include <stdio.h>

int main() {
    int rows = 5; 

    // Outer loop
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf("   ");
        }

        // acending order
        for (int j = 1; j <= i + 1; j++) {
            printf("%d  ", j);
        }

        //  decreasing order
        for (int j = i; j >= 1; j--) {
            printf("%d  ", j);
        }

        printf("\n");
    }

    return 0;
}
