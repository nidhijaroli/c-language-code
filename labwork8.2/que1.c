// Write a Program to find leap years between two given numbers and store them in an array. And then print that array.

#include <stdio.h>

int main() {
  
     int a[10],i,no1,no2,count;
     
     printf("enter the first number : ");
     scanf("%d",&no1);
     
     printf("\nenter the second number : ");
     scanf("%d",&no2);
     
     printf("\nThe array is : ");
     
     for(i=no1;i<=no2;i++){
         if(i % 4 == 0){
             a[count]=i;
             count++;
         }
     }
     
     for(i=0;i<count;i++){
         printf("%d",a[i]);
        if (i != count - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}