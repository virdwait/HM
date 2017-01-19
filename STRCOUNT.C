#include<stdio.h>
#include<conio.h>
void main(){
	long int n,rn=0,tn;
	int nd=0;
	clrscr();
	scanf("%ld",&n);
	while(n<=0){
		clrscr();
		printf("Enter a valid positive number\n");
		scanf("%ld",&n);
	}
	clrscr();
	printf("%ld\n",n);
	tn=n;
	while(n>0){
		nd++;
		rn*=10;
		rn+=n%10;
		n=n/10;
	}
	printf("No of digits present in %ld is %d",tn,nd);
	printf("\nReverse of %ld is %ld",tn,rn);
	getch();
}