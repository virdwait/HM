#include<stdio.h>
#include<conio.h>
int a[20],i;
void min(){
	int j=0,pivot=a[0];
	while(j<i){
		if(pivot>a[j]){
			pivot=a[j];
		}
		j++;
	}
	printf("\nMinimum Element : %d",pivot);
	return;
}
void max(){
	int j=0,pivot=a[0];
	while(j<i){
		if(pivot<a[j]){
			pivot=a[j];
		}
		j++;
	}
	printf("\nMaximum Element : %d",pivot);
	return;
}
void push(){
	int j=0;
	printf("\nEnter element to insert : ");
	scanf("%d",&a[i]);
	i++;
	printf("\n");
	while(j<i){
		printf("%d\t",a[j]);
		j++;
	}
	return;
}
void reverse(){
	int j=i-1,t[20],k=0;
	while(j>=0){
		t[k]=a[j];
		j--;
		k++;
	}
	j=0;
	printf("\n");
	while(j<i){
		printf("%d\t",t[j]);
		j++;
	}
	return;
}
void remov(){
	int elem,j=0;
	printf("Enter the element you want to remove : ");
	scanf("%d",&elem);
	while(j<=i && a[j]!=elem){
		j++;
	}
	if(j==i){
		a[j]='\0';
	}
	else
	if(j<i){
		while(j<i){
			a[j]=a[j+1];
			j++;
		}
		printf("Removed element\n");
		i--;
	}
	else{
		printf("Element not found \n");
	}
	j=0;
	while(j<i){
		printf("%d\t",a[j]);
		j++;
	}
}
void merge(){
	int b[10],c[20],n,j,k;
	printf("\nEnter size of second array : ");
	scanf("%d",&n);
	j=0;
	printf("\nEnter Elements : ");
	while(j<n){
		scanf("%d",&b[j]);
		j++;
	}
	b[j]='\0';
	j=0;
	while(a[j]!='\0'){
		c[j]=a[j];
		j++;
	}
	k=0;
	while(b[k]!='\0'){
		c[j]=b[k];
		j++;
		k++;
	}
	c[j]='\0';
	k=j;
	j=0;
	printf("\nThe merged array : \n");
	while(c[j]!='\0'){
		printf("%d ",c[j]);
		j++;
	}
}
void main(){
	int j=0,ch;
	void min(); //?18
	void max(); //?17
	void push(); //?20
	void reverse(); //?19
	void remov();
	void merge();
	clrscr();
	printf("Enter size of array : ");
	scanf("%d",&i);
	printf("\nEnter Elements : ");
	while(j<i){
		scanf("%d",&a[j]);
		j++;
	}
	printf("\n1.Min\t\t2.Max\n3.Reverse\t\t4.Push\n5.Remove\t\t6.Merge\nEnter Your Choice : ");
	scanf("%d",&ch);
	switch(ch){
		case 1 : min();
			break;
		case 2 : max();
			break;
		case 3 : reverse();
			break;
		case 4 : push();
			break;
		case 5 : remov();
			break;
		case 6 : merge();
			break;
		default : printf("Invalid choice");
			break;
	}
	getch();
}