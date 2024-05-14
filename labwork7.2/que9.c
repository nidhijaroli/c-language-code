#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    // Print the upper half of the pattern
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Print the lower half of the pattern
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
