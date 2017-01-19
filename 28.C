#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char s[50],s1;
	int i,j,FLAG1=0,count=0,k;
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
			printf("The last non repeating character is : %c",s1);
			FLAG1=1;
		}
		count=0;
		i--;
		if(FLAG1==1)
			break;
	}

	getch();
}