#include<stdio.h>
#include<conio.h>
	void main(){
	char num[10];
	int i=0,n;
	clrscr();
	printf("Enter mobile number : ");
	gets(num);
	n=strlen(num);
	if(n<10 || num[0]<'7'){
		printf("\nInvalid Mobile Number");
		getch();
		return;
	}
	i=1;
	while(i<10){
		if(num[i]<'0' || num[i]>'9'){
			printf("\nInvalid Mobile Number");
			getch();
			return;
		}
		i++;
	}
	printf("\nThis is a valid mobile number");
	getch();
}