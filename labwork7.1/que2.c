#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        for (int j = i; j <= rows; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
