#include<stdio.h>
#include<conio.h>
int check(int a){
	int i=0,j=0,k=0,count=0,b[5];
	while(a>0){
		b[i]=a%10;
		a=a/10;
		i++;
	}
	while(j<i){
		k=0;
		while(k<i){
			if(b[j]==b[k])
				count++;
			k++;
		}
		if(count>1)
			break;
		count=0;
		j++;
	}
	return count>1?0:1;
}
void main(){
	int start,end,num[20],i,j=0;
	int check(int);
	clrscr();
	printf("Enter the start and end : ");
	scanf("%d%d",&start,&end);
	i=start;
	while(i<=end){
		if(check(i)){
			num[j]=i;
			j++;
		}
		i++;
	}
	i=0;
	printf("In between %d and %d, there are %d numbers with no digits repeated.\n",start,end,j);
	while(i<j){
		printf("%d ",num[i]);
		i++;
	}
	getch();
}


