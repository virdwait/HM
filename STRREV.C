#include<stdio.h>
#include<conio.h>
#include<string.h>
char rs[20],s[20];
int sp[10],spp=0;
void push(int a){
     sp[spp]=a;
     spp++;
}
int isFilled(int a){
     int i=0;
     while(i<spp){
	if(a==sp[i])
		return 1;
	i++;
     }
     return 0;
}
void main(){
	void push(int);
	int isFilled(int),i=0,j=0,k;
	clrscr();
	gets(s);
	k=strlen(s);
	while(i<k){//first add special symbols to position
		if(s[i]<'A'||s[i]>'Z'&&s[i]<'a'||s[i]>'z'){
			//special character;
			rs[i]=s[i];
			push(i);
		}
		i++;
	}
	i=0;
	j=k-1;
	while(i<k && j>=0){
		while(isFilled(i))
			i++;
		while(isFilled(j))
			j--;
		rs[i]=s[j];
		i++;
		j--;
	}
	puts(rs);
	getch();
}
