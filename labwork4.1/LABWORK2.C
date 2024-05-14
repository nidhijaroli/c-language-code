#include<stdio.h>
#include<conio.h>
void main(){
     int a,b,c;
     clrscr();
     printf("\n enter A value");
     scanf("%d",&a);
     printf("\n enter B value");
     scanf("%d",&b);
     printf("\n before swap variable");
     c=a;
     a=b;
     b=c;
     printf("\n after swap variable");
     printf("\n a=%d b=%d",a,b);
     getch();
     }