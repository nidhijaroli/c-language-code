
#include <stdio.h>

int main() {
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    int num = n;

    while (num >= 1) {
        if (num % 2 != 0) {
            printf("%d ", num);
        }
        num--;
    }

    return 0;
}