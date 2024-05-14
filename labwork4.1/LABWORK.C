#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
     clrscr();
	 printf("\n enter A value");
	 scanf("%d",&a);
	 printf("\n enter B value");
	 scanf("%d",&b);
	 printf("\n before swap variable");
	 a=a^b;
	 b=a^b;
	 a=a^b;
	 printf("\n after swap variable");
	 printf("\n a=%d",a);
	 printf("\n b=%d",b);

	 getch();
	 }
