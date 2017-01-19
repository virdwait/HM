#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int dec,i=0,j;
	long int bin=0;
	clrscr();
	printf("Enter the Decimal Number  ");
	scanf("%d",&dec);
	while(dec>0){
		j=pow(10,i);
		bin+=j*(dec%2);
		dec=dec/2;
		i++;
	}
	printf("\nBinary = %ld",bin);
	getch();
}