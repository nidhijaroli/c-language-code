#include <stdio.h>

int main() {
    
    int n,i;
    
    printf("enter any number:");
    scanf("%d",&n);
    
     printf("\nMultiplication table of %d:\n", n);
    
    for(i=1;i<=10;i++){
        printf("\n %d * %d = %d",n,i,n*i);
    }

    return 0;
}