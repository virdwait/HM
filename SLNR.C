#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char s[50],s1;
	int i,j,FLAG1=0,FLAG2=0,count=0,k;
	clrscr();
	gets(s);
	//got the string
	i=strlen(s)-1;
	k=i;
	while(i>=0){
		s1=s[i];
		j=k;
		while(j>=0){
			if(s1==s[j])
				count++;
			j--;
		}
		if(count==1){//The string appears only once
			if(FLAG1==1 && FLAG2==0){ //second last non repeating character
				FLAG2=1;
				printf("\'%c\' is the second last non repeating character",s1);
				break;
			}
			else if(FLAG1==0)
				FLAG1=1;
			if(FLAG2==1){
				break;
			}
		}
		count=0;
		i--;
		if(FLAG2==1)
			break;
	}

	getch();
}