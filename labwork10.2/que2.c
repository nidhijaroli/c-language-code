#include <stdio.h>

void add();

void main() {
   
add();
       
}

void add() {
    
    int a[50], n, i,sum=0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
  
    printf("Sum of array elements: %d\n", sum);
}