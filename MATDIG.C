																																																																																																																																							#include<stdio.h>
#include<conio.h>
void main(){
	int m,n,i=0,j=0,a[10][10],k,l,FLAG;
	clrscr();
	printf("Enter positive values M & N\n");
	scanf("%d%d",&m,&n);
	printf("\nEnter %d Values",m*n);
	while(i<m){
		j=0;
		while(j<n){
			scanf("%d",&a[i][j]);
																																																																							j++;
		}
		i++;
	}
	printf("\n");
	//got the matrix
	for(i=0;i<n;i++){
		for(j=m-1;j>=0;j--){
			k=j;
			l=i;
			printf("%d ",a[k][l]);
			++k;
			++l;
			while(k<m && l<n){
				printf("%d ",a[k][l]);
				++k;
				++l;
			}
			printf("\n");
			if(k==l){
				FLAG=1;
				break;
			}

		}
		if(FLAG==1)

			break;


		printf("\n");
	}//completed till main diagonal
		k=0;
		for(j=1;j<n;j++){
			k=i;
			l=j;
			printf("%d ",a[k][l]);
			++k;
			++l;
			while(k<m && l<n){
				printf("%d ",a[k][l]);
				++k;
				++l;
			}
			printf("\n");
		}

	getch();

}