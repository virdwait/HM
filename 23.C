#include<stdio.h>
#include<conio.h>
int isPalindrome(char a[10]){
	int n,i=0;
	n=strlen(a);
	while(i<n){
		if(a[i]!=a[(n-i)-1])
			return 0;
		i++;
	}
	return 1;
}

void main(){
	int isPalindrome(char[]);
	char a[10][10],b[10][10];
	int i=0,n,ln[10],j=0,k;
	clrscr();
	printf("Enter the number of string : ");
	scanf("%d",&n);
	while(i<n){
		scanf("%s",a[i]);
		i++;
	}
	i=0;
	j=0;
	while(i<n){
		if(isPalindrome(a[i])){
			k=strlen(a[i]);
			b[j][k]='\0';
			k--;
			while(k>=0){
				b[j][k]=a[i][k];
				k--;
			}
			ln[j]=strlen(a[i]);
			j++;

		}
		i++;
	}
	i=1;
	k=0;
	while(i<j){
		if(ln[k]>ln[i])
			k=i;
		i++;
	}
	printf("\nShortest palindrome is %s",b[k]);

	getch();
}