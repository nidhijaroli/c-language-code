#include <stdio.h>

int main() {
    int n = 5; 

    // printing upper half  pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int k = 1; k <= (n - i + 1) * 2; k++) {
            printf("  ");
        }
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // printing  lower half pattern
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int k = 1; k <= (n - i + 1) * 2; k++) {
            printf("  ");
        }
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
