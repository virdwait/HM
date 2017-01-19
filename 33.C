#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char a[10],b[10];
	int al,bl,i=0,j=0,FLAG=0;
	clrscr();
	printf("Enter two strings : ");
	scanf("%s%s",a,b);
	al=strlen(a);
	bl=strlen(b);
	while(i<bl){
		j=0;
		FLAG=0;
		while(j<al){
			if(b[i]==a[j]){
				FLAG=1;
				break;
			}
			j++;
		}
		if(FLAG==0){
			printf("\n%s is not formed from %s",b,a);
			getch();
			return;
		}
		FLAG=0;
		i++;
	}
	printf("\n%s is formed from %s",b,a);
	getch();
}