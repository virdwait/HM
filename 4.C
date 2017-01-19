#include<stdio.h>
#include<conio.h>
long double fact=1;
void factorial(int a){ //Factorial function
	if(a<=0) return;
	fact*=a;
	a--;
	factorial(a);          // Recursion
}
void main(){
	int a;
	void factorial(int);
	clrscr();
	printf("Enter a number to find factorial : ");
	scanf("%d",&a);
	factorial(a);
	printf("\nFactorial = %ld",fact);
	getch();
}