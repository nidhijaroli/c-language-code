#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        int num = i;
        for (int j = rows; j >= i; j--) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
