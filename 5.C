#include<stdio.h>
#include<conio.h>
#include<math.h>
long int sum=0;
void calc(int n){ //function to calculate
	if(n<=0) return;
	sum+=pow(n,2);
	n--;
	calc(n);
}
void main(){
	int a;
	clrscr();
	printf("Enter the Limit : ");
	scanf("%d",&a);
	calc(a);
	printf("\nThe The sumof the series = %ld",sum);
	getch();
}