#include <stdio.h>

int main() {
   int no, sum=0,n,last;
   
   printf("enter any number:");
   scanf("%d",&no);
   
   last = no%10;
   
   while(no>0){
       n=no%10;
       no=no/10;
   }
   sum=n+last;
   
   printf("the frist and last digit multipication is: %d",sum);
    return 0;
}