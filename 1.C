#include<stdio.h>
#include<conio.h>
void main(){
	int temp1=0,temp2=1,sum,n;
	clrscr();
	printf("Enter Limit : ");
	scanf("%d",&n);
	if(n<2){
		printf("%d",temp1);
		getch();
		return;
	}
	printf("%d %d",temp1,temp2);
	n=n-2;
	while(n>0){
		sum=temp1+temp2;
		printf(" %d",sum);
		temp1=temp2;
		temp2=sum;
		n--;
	}
	getch();
}