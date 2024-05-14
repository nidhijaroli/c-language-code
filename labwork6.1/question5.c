#include <stdio.h>

int main() {
    int startYear, endYear;
    
    printf("Enter the first number: ");
    scanf("%d", &startYear);
    
    printf("Enter the second number: ");
    scanf("%d", &endYear);
    
    printf("Leap years between %d and %d: ", startYear, endYear);
    
    int year = startYear;
    
    while (year <= endYear) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d ", year);
        }
        year++;
    }
    
    return 0;
}
