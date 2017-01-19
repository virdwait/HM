#include<stdio.h>
#include<conio.h>
void fib(int n,int t1,int t2,int s){
	if(n>0){
		s=t1+t2;
		t1=t2;
		t2=s;
		fib(--n,t1,t2,s);
	}
	else{
		printf("The fibonacci number is %d",s);
		return;
	}
}
void main(){
	void fib(int,int,int,int);
	int n;
	clrscr();
	printf("Enter the limit : ");
	scanf("%d",&n);
	fib(n-2,0,1,0);
	getch();
}
