#include <stdio.h>

int main() {
    int N, i = 2;
    
    printf("Enter any number: ");
    scanf("%d", &N);
    
    printf("Output: ");
    
    do {
        printf("%d ", i);
        i += 2;
    } while (i <= N);

    return 0;
}
