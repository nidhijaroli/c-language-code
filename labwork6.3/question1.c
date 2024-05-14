#include <stdio.h>

int main() {
    
    int n , sum=0, i=1;
    
    printf("enter any number:");
    scanf("%d",&n);
    
    for(i;i<=n;i++){
        sum=sum+i;
    }
    
    printf("The sum of all numbers: %d\n", sum);

    return 0;
}