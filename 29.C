#include<stdio.h>
#include<conio.h>
void main(){
	int a[5][5],i=0,j=0,m,n,k,l,ch;
	clrscr();
	printf("Enter M & N for Matrix : ");
	scanf("%d%d",&m,&n);
	printf("\nEnter %d elements : ",m*n);

	while(i<m){
		j=0;
		while(j<n){
			scanf("%d",&a[i][j]);
			j++;
		}
		i++;
	}
	printf("\nEnter display option : \n1.Inline\t\t2.Line by Line\n");
	scanf("%d",&ch);
	clrscr();
	i=0;
	while(i<m){
		j=0;
		while(j<n){
			printf("%d\t",a[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
			k=i+1;
			l=j-1;
			while(l>=0 && k<m){
			    printf(" %d",a[k][l]);
			    k++;
			    l--;
			}
			if(ch==2)
				printf("\n");
			else	printf(" ");
		}
		if(k+l==n-1) break;
	}
	for(i=1;i<m;i++){
		j=n-1;
		printf("%d",a[i][j]);
		k=i+1;
		l=j-1;
		while(l>0 && k<m){
			printf(" %d",a[k][l]);
			l--;
			k++;
		}
		if(ch==2) printf("\n");
		else printf(" ");
	}
	getch();
}