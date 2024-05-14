
#include <stdio.h>

int main() {
    
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);

    
    const char* result = (num % 2 == 0) ? "This number is Even." : "This number is Odd.";

    
    printf("%s\n", result);

    return 0;
}