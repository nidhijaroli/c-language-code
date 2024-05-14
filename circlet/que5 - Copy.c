#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper half pattern
    for (i = 1; i <= n; i++) {
        //  left half of the pattern
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // spaces in between
        for (j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }

        //  right half of the pattern
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }

    
        printf("\n");
    }

    // Lower half of the pattern
    for (i = n; i >= 1; i--) {
        //  left half of the pattern
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        //  spaces in between
        for (j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }

        //  right half of the pattern
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
