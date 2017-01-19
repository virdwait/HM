#include<stdio.h>
#include<conio.h>
void main(){
	int *a,*b,*c;
	clrscr();
	printf("Enter 2 values : ");
	scanf("%d%d",a,b);
	*c=*a+*b;
	printf("The sum is %d",*c);
	getch();
}