#include<stdio.h>
#include<conio.h>
void main(){
	char a[10],b[10];
	int i,j,k,l,FLAG=0;
	clrscr();
	printf("Enter first string \n");
	gets(a);
	printf("Enter second string \n");
	gets(b);
	i=0;
	j=strlen(a);
	k=strlen(b);
	while(i<j){
		l=0;
		FLAG=0;
		while(l<k){
			if(a[i]==b[l]){
				FLAG=1;
				break;
			}
			l++;
		}
		if(FLAG==0){
			printf("%c",a[i]);
		}
		i++;
	}
	getch();
}