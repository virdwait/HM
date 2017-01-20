#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	int i,j,k,n,m,bptr=0;
	char a[30],b[30],ab[20],temp,start[20];
	char *wd;
	clrscr();
	printf("Enter the sentence : ");
	gets(a);
	n=strlen(a);
	i=0;
	wd=strtok(a," ");
	while(i<n){
		k=strlen(wd);
		j=0;
		while(j<k){
			ab[j]=wd[j];
			j++;
		}//copied to a
		//sort it
		i+=k+1;
		j=0;
		while(j<k){
			m=j;
			while(m<k){
				if(ab[m]<ab[j]){
					temp=ab[j];
					ab[j]=ab[m];
					ab[m]=temp;
				}
				m++;
			}
			j++;
		}
		k=strlen(ab);
		j=0;
		while(j<k){
			b[bptr]=ab[j];
			bptr++;
			j++;
		}
		b[bptr]=' ';
		bptr++;
		j=0;
		while(j<k){
			ab[j]='\0';
			j++;
		}
		wd=strtok(NULL," ");
	}
	j=0;
	//puts(b);
	while(j<bptr){
		printf("%c",b[j]);
		j++;
	}
	getch();
}