#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,j,ml,mr;
	clrscr();
	printf("Enter the limit : ");
	scanf("%d",&n);
	ml=n;
	mr=ml;
	for(i=0;i<n;i++){
		for(j=0;j<ml;j++){
			printf(" ");
		}
		for(j=ml;j<=mr;j++){
			printf("*");
		}
		printf("\n");
		if(ml>1){
			ml--;
			mr++;
		}
	}
	ml++;
	for(i=n-1;i>=0;i++){
		for(j=0;j<ml;j++){
			printf(" ");
		}
		for(j=ml;j<mr;j++){
			printf("*");
		}
		printf("\n");
		if(ml<=(((n*2)-1)/2)+1){
		      ml++;
		      mr--;
		}
		else{
			getch();
			return;
		}
	}
	getch();
}