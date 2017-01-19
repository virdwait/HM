#include<stdio.h>
#include<conio.h>
void main(){
	int a[10],b[20][2],k=0,i=0,j=0,n,sum;
	clrscr();
	printf("Enter size of array : ");
	scanf("%d",&n);
	printf("\nEnter the elements : ");
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	printf("\nEnter the sum value : ");
	scanf("%d",&sum);
	i=0;
	while(i<n){
		j=i;
		while(j<n){
			if(a[i]+a[j]==sum){
				b[k][0]=a[i];
				b[k][1]=a[j];
				k++;
			}
			j++;
		}
		i++;
	}
	i=0;
	if(k<=0){
		printf("\nNo pairs found");
		getch();
		return;
	}
	printf("\nThe pairs found are");
	while(i<k){
		printf("\n(%d,%d)",b[i][0],b[i][1]);
		i++;
	}
	getch();
}