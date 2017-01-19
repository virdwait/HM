#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct data{
	int code;
	char msg;
}d[5];
char decode(char a[5]){
	int i=0,b;
	while(i<5){
		b=atoi(a);
		if(b==d[i].code)
			return d[i].msg;
		i++;
	}
	return '0';
}
void main(){
	char decode(char[]);
	char m[20],n[10],t[5];
	int i,j,ln,k,nl=0;
	clrscr();
	d[0].code=0;
	d[0].msg='A';
	d[1].code=10;
	d[1].msg='B';
	d[2].code=110;
	d[2].msg='C';
	d[3].code=1110;
	d[3].msg='D';
	d[4].code=1111;
	d[4].msg='E';
	printf("Enter the encoded data : ");
	scanf("%s",m);
	ln=strlen(m);
	k=0;
	puts(m);
	while(k<ln){
		i=0;
		do{
			t[i]=m[k];
			i++;
			k++;
		}while(m[k-1]!='0' && i<4);
		t[i]='\0';
		j=0;
		n[nl]=decode(t);
		nl++;
	}
	n[nl]='\0';
	puts(n);
	getch();

}