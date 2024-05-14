#include <stdio.h>

int main() {
   int no, count=0,n;
   
   printf("enter any number:");
   scanf("%d",&no);
   
   while(no>0){
       n=no%10;
       no=no/10;
       count++;
   }
   printf("the total number of digit is: %d",count);
    return 0;
}