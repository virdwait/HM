#include<stdio.h>
#include<conio.h>
#include<string.h>
int vowel(char a){
	if(a==65 || a==69 || a==73 || a==79 || a==85 || a==89 || a==97 || a==101 || a==105 || a==111 || a==117 || a==121)
		return 1;
	return 0;
}
void main(){
	int vowel(char);
	char a[20],b[20];
	int i=0,j=0,al,bl,wa=0,wb=0,FLAG=0;
	clrscr();
	printf("Enter two strings : ");
	scanf("%s%s",a,b);
	al=strlen(a);
	bl=strlen(b);
	while(i<al){
		if(vowel(a[i])){
			wa++;
		}
		i++;
	}
	i=0;
	while(i<bl){
		if(vowel(b[i])){
			wb++;
		}
		i++;
	}
	printf("\nHeaviest word is ");
	if(wa>wb){
		printf("\n\"%s\"",a);
		FLAG=1;
	}
	else
	if(wa<wb){
		printf("\n\"%s\"",b);
		FLAG=1;
	}
	else{
		i=0;
		j=0;
		while(i<al && j<bl){
			if(a[i]<b[i]){
				printf("\n\"%s\"",a);
				FLAG=1;
				break;
			}
			else
			if(a[i]>b[i]){
				printf("\n\"%s\"",b);
				break;
				FLAG=1;
			}
			i++;
			j++;
		}
		if(FLAG==0){
			if(al<bl)
				printf("\n\"%s\"",a);
			else
			if(al>=bl)
				printf("\n\"%s\"",b);
		}
	}
	getch();
}
