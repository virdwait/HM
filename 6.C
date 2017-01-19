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
		if(ml>1){
			ml--;
			mr++;
			printf("\n");
		}
		else{
			getch();
			return;
		}
	}
	getch();
}