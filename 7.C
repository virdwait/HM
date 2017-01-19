#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n,m,il;
	clrscr();
	printf("Enter Limit : ");
	scanf("%d",&n);
	m=n;
	il=m;
	for(i=0;i<=n;i++){
		for(j=0;j<il;j++){
			printf(" ");
		}
		il--;
		for(j=i;j<=((2*i)-1);j++){
			printf("%d",j);
		}
		for(j=((2*i)-2);j>=i;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}