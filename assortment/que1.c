#include<stdio.h>

int main(){
    
    int a[10],n,i;
    
    printf("enter array size: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
         printf("a[%d] = ", i);
        scanf("%d",&a[i]);
    }
    
    printf("\nNegative elements from an Array:");
    
    for(i=0;i<n;i++){
        
     if(a[i]<0){
         printf("%d ",a[i]);
     }
     
    }
    return 0;
}