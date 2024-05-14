#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("%d ", j);
        }
        for (int k = 0; k < 2 * i; k++) {
            printf("  ");
        }
        for (int l = rows - i; l >= 1; l--) {
            if (l != rows)
                printf("%d ", l);
        }
        printf("\n");
    }

    return 0;
}
