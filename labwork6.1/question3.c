
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    int num = 1;
    while (num <= n) {
        printf("%d\n", num);
        num++;
    }

    return 0;
}