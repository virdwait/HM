#include<stdio.h>
#include<conio.h>
void main(){
	int i=0,j=0,n;
	clrscr();
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=0;j<(2*i)-1;j++){
			if(j%2==0)
				printf("*");
			else
				printf("A");
		}
		printf("\n");
	}
	getch();
}