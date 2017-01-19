#include<stdio.h>
#include<conio.h>
int b,FLAG=0;
void recur(int n){
	if(n<=0 && FLAG==0){//middle point
		FLAG=1;
		recur(n);
	}
	else if(FLAG==0){  //decrease
		n-=5;
		printf("%d ",n);
		recur(n);
	}
	else if(FLAG==1 && n<b){
		n+=5;
		printf("%d ",n);
		recur(n);
	}
}
void main(){
	void recur(int);
	int n=0;
	clrscr();
	scanf("%d",&n);
	while(n<=0){
		clrscr();
		printf("Enter a positive number\n");
		scanf("%d",&n);
	}
	clrscr();
	printf("%d\n",n);
	b=n;
	printf("%d ",n);
	recur(n);
	getch();
}