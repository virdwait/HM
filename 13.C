#include<stdio.h>
#include<conio.h>
void main(){
	int a[10][10],b[10][10],c[10][10],i,j,k,m,n,o;
	clrscr();
	printf("Enter size of first matrix m X n :");
	scanf("%d%d",&m,&n);
	printf("\nEnter elements : ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter size of second Matrix %d X N : ",n);
	scanf("%d",&o);
	printf("\nEnter Elements : ");
	for(i=0;i<n;i++){
		for(j=0;j<o;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<o;j++){
			c[i][j]=0;
		}
	}
	clrscr();
	printf(" A \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nB\n");
	for(i=0;i<n;i++){
		for(j=0;j<o;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\n\nProduct : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			for(k=0;k<o;k++){
				c[i][k]=c[i][k]+(a[i][j]*b[j][k]);
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<o;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

	getch();
}
