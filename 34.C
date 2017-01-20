#include<stdio.h>
#include<conio.h>
int validate(char a){
	if(a>=65 && a<=90 || a>=94 && a<=126 || a>=42 && a<=57)
		return 1;
	if(a>=35 && a<=38 || a==33 || a==61 || a==63)
		return 1;
	return 0;
}
void main(){
	char email[50];
	int i=1,n,FLAG=0,at_count=0;
	int validate(char);
	clrscr();
	printf("Enter the email id : ");
	scanf("%s",email);
	n=strlen(email);
	if(email[0]<65 || email[0]>90 && email[0]<97 && email[0]>122)
		FLAG=1;
	while(i<n && FLAG==0 && at_count<=1){
		if(!validate(email[i])){
			if(email[i]==64)
				at_count++;
			else
				FLAG=1;
		}
		i++;
	}
	if(at_count==1 && FLAG==0)
		printf("\nValid email address");
	else
		printf("\nInvalid email address");
	getch();
}