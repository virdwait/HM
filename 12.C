#include<stdio.h>
#include<conio.h>
int fact=1;
int factorial(int a){ //Factorial function
	if(a<=0) return fact;
	fact*=a;
	a--;
	factorial(a);          // Recursion
}
void main(){
	int factorial(int);
	int n=0,r=0;
	long int npr=0;
	long float ncr=0.0;
	clrscr();
	printf("Enter n and r values : ");
	scanf("%d%d",&n,&r);
	npr=factorial(n);
	fact=1;
	npr/=factorial(n-r);
	printf("nPr=%ld\n",npr);
	fact=1;
	ncr=(float)npr/factorial(r);
	printf("nCr=%lf",ncr);
	getch();
}