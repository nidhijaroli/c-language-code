#include <stdio.h>

int main() {
    
    int units;
    
    float bill = 0;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 0.50;
    } else if (units >= 51 && units <= 150) {
        bill = 25 + (units - 50) * 0.75;
    } else if (units >= 151 && units <= 250) {
        bill = 25 + 75 + (units - 150) * 1.20;
    } else {
        bill = 25 + 75 + 120 + (units - 250) * 1.50;
    }

    
    bill *= 1.20;
    
    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}