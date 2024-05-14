#include <stdio.h>

int main() {
    int N, i, num1 = 0, num2 = 1, nextTerm;
    
    printf("Enter any number: ");
    scanf("%d", &N);
    
    printf("Output: ");
    
    for (i = 0; i < N; i++) {
        printf("%d, ", num1);
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }

    return 0;
}
