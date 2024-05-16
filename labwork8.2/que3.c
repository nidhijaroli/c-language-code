#include <stdio.h>

int main() {
  
    int i,j,m,n,total,size,sum=0,a[100],b[100],c[100];
    
    printf("Enter array size: ");
    scanf("%d", &m);
    
    printf("\nEnter array A's elements:\n");
    for (i=0;i<m;i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\nEnter array size: ");
    scanf("%d", &n);

    printf("\nEnter array B's elements:\n");
    for (i=0;i<n;i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    
    total=m+n;
    
    for(i=0;i<m;i++){
        c[i]=a[i];
    }
    
    for(i=m,j=0;i<total;i++,j++){
         c[i]=b[j];
    }
    
    printf("\narray c's elements is :\n");
    for(i=0;i<total;i++){
        printf("%d ",c[i]);
    }
    
    return 0;
}