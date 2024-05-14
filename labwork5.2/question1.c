#include <stdio.h>

int main() {
    int num1, num2, num3, num4, max;

    printf("Enter the value of the first number: ");
    scanf("%d", &num1);
    printf("Enter the value of the second number: ");
    scanf("%d", &num2);
    printf("Enter the value of the third number: ");
    scanf("%d", &num3);
    printf("Enter the value of the fourth number: ");
    scanf("%d", &num4);

    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                max = num1;
            } else {
                max = num4;
            }
        } else {
            if (num3 > num4) {
                max = num3;
            } else {
                max = num4;
            }
        }
    } else {
        if (num2 > num3) {
            if (num2 > num4) {
                max = num2;
            } else {
                max = num4;
            }
        } else {
            if (num3 > num4) {
                max = num3;
            } else {
                max = num4;
            }
        }
    }

    printf("The maximum value is: %d\n", max);

    return 0;
}
