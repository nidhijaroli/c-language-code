#include <stdio.h>

int main() {
    
    int n , mult=1, i=1;
    
    printf("enter any number:");
    scanf("%d",&n);
    

    for(i;i<=n;i++){
        mult=mult*i;
    }
       
    printf("The sum of all numbers: %d\n", mult);

    return 0;
}


