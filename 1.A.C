#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	return;
}
void main(){
	void swap(int*, int*);
	int a,b;
	clrscr();
	printf("Enter 2 Values for a & b");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\nAfter Swap, a=%d and b=%d",a,b);
	getch();
}