#include<stdio.h>
#include<conio.h>
void main(){
	int a[5][5],i=0,sum,j=0,sh[5],sv[5],sd[2],n,pvt,FLAG=0;
	clrscr();
	printf("Enter size of square : " );
	scanf("%d",&n);
	printf("\nEnter the Elements : ");
		while(i<n){
		j=0;
		while(j<n){
			scanf("%d",&a[i][j]);
			j++;
		}
		i++;
	}
	i=0;
	while(i<n){
		j=0;
		sum=0;
		while(j<n){
			sum+=a[i][j];
			j++;
		}
		sh[i]=sum;
		i++;
	}
	while(j<n){
		i=0;
		sum=0;
		while(i<n){
			sum+=a[i][j];
			i++;
		}
		sv[j]=sum;
		j++;
	}
	sum=0;
	i=0;
	while(i<n){
		sum+=a[i][i];
		i++;
	}
	sd[0]=sum;
	i=0;
	j=n-1;
	sum=0;
	while(i<n && j>=0){
		sum+=a[i][j];
		i++;
		j--;
	}
	sd[1]=sum;
	if(sd[0]!=sd[1]){
		printf("\nNot magic square ");
		getch();
		return;
	}
	pvt=sd[0];
	while(i<n){
		if(pvt!=sh[i] || pvt!=sv[i]){
			printf("\nNot magic square ");
			getch();
			return;
		}
		i++;
	}
	printf("Magic square with sum=%d",pvt);
	getch();
}