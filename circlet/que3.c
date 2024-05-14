#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("   ");
        }

        //  descending order
        for (int k = i; k <= rows; k++) {
            printf("%2d ", k);
        }

        printf("\n");
    }

    return 0;
}
