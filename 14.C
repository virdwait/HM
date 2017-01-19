#include<stdio.h>
#include<conio.h>
void main(){
	int i,c=1,n,j;
	clrscr();
	printf("Enter The limit : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
	getch();
}