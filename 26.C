#include<stdio.h>
#include<conio.h>
int sum=0;
void calc(int a){
	sum=0;
	while(a>0){
		sum+=a%10;
		a=a/10;
	}
	if(sum<10) return;
	calc(sum);
}
void main(){
	void calc(int);
	int n;
	clrscr();
	printf("Enter the number : ");
	scanf("%d",&n);
	calc(n);
	printf("\nThe sum of digits is : %d",sum);
	getch();
}