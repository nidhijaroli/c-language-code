#include <stdio.h>

int main() {
    int firstAngle, secondAngle, thirdAngle;

    printf("Enter the first angle: ");
    scanf("%d", &firstAngle);
    printf("Enter the second angle: ");
    scanf("%d", &secondAngle);

    thirdAngle = 180 - (firstAngle + secondAngle);

    printf("The third angle is: %d\n", thirdAngle);

    return 0;
}
