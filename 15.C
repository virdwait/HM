#include<stdio.h>
#include<conio.h>
long fact(int a){
	long result=1;
	while(a>=1){
		result*=a;
		a--;
	}
	return result;
}
void main(){
	long fact(int);
	int n,i,j=1;
	long m;
	clrscr();
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=i;j<=n;j++)
			printf("  ");
		for(j=0;j<=i;j++){
			m=fact(i)/(fact(j)*fact(i-j));
			printf("%4ld",m);
		}
		printf("\n");
	}

	getch();
}
