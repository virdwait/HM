#include<stdio.h>
#include<conio.h>
void main(){
	int i,n,t1=0,t2=1,s=1,t3;
	clrscr();
	printf("Enter the Limit : ");
	scanf("%d",&n);
	printf("%d %d",t1,t2);
	while(n>0){
		printf(" %d",s);
		t3=s;
		s=t1+t2;
		t1=t2;
		t2=t3;
		n--;
	}
	getch();
}