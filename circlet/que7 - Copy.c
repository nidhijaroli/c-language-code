#include <stdio.h>

int main() {
    int rows = 5;
    int columns = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i == 0 || i == 2) {
                printf("*  ");
            } else if (i == 1 && j == 0) {
                printf("*  ");
            } else if (i == 3 && j == 0) {
                printf("*  ");
            } else if (i == 4 && j == 0) {
                printf("*  ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}
