#include<stdio.h>
#include<conio.h>
int qp[2],hp[2],ta[2];
void main(){
	int i,j,FLAG=0;
	clrscr();
	printf("Enter Queen Position x,y :");
	scanf("%d%d",&i,&j);
	i=i>7?7:i;
	i=i<0?0:i;
	j=j>7?7:j;
	j=j<0?0:j;
	qp[0]=i;
	qp[1]=j;
	printf("Enter Horse Position x,y :");
	scanf("%d%d",&i,&j);
	i=i>7?7:i;
	i=i<0?0:i;
	j=j>7?7:j;
	j=j<0?0:j;
	hp[0]=i;
	hp[1]=j;
	if(qp[0]==hp[0]||qp[1]==hp[1]){
		printf("Queen will cut the horse");
		FLAG=1;
	}
	else{
	     ta[0]=qp[0];
	     ta[1]=qp[1];
	     while(ta[0]<=7 && ta[1]<=7){
		ta[0]+=1;
		ta[1]+=1;
		if(ta[0]==hp[0] && ta[1]==hp[1]){
			printf("Queen will cut the horse");
			FLAG=1;
			break;
		}
	     }
	     ta[0]=qp[0];
	     ta[1]=qp[1];
	     while(ta[0]>=0 && ta[1]>=0){
		ta[0]-=1;
		ta[1]-=1;
		if(ta[0]==hp[0] && ta[1]==hp[1]){
			printf("Queen will cut the horse");
			FLAG=1;
			break;
		}
	     }
	     ta[0]=qp[0];
	     ta[1]=qp[1];
	     while(ta[0]<=7 && ta[1]>=0){
		ta[0]+=1;
		ta[1]-=1;
		if(ta[0]==hp[0] && ta[1]==hp[1]){
			printf("Queen will cut the horse");
			FLAG=1;
			break;
		}
	     }
	     ta[0]=qp[0];
	     ta[1]=qp[1];
	     while(ta[0]>=0 && ta[1]<=7){
		ta[0]-=1;
		ta[1]+=1;
		if(ta[0]==hp[0] && ta[1]==hp[1]){
			printf("Queen will cut the horse");
			FLAG=1;
			break;
		}
	     }
	}
	if(FLAG==0){
		printf("Queen will not cut the horse");
	}
	printf("\n");
	// HORSE PART
	FLAG=0;
	while(FLAG==0){
		ta[0]=hp[0];
		ta[1]=hp[1];
		ta[0]+=2;
		ta[1]+=1;
		if(ta[0]==qp[0] && ta[1]==qp[1]){
			printf("Horse will cut the queen");
			FLAG=1;
			break;
		}
		ta[0]=hp[0];
		ta[1]=hp[1];
		ta[0]+=1;
		ta[1]+=2;
		if(ta[0]==qp[0] && ta[1]==qp[1]){
			printf("Horse will cut the queen");
			FLAG=1;
			break;
		}
		ta[0]=hp[0];
		ta[1]=hp[1];
		ta[0]-=1;
		ta[1]-=2;
		if(ta[0]==qp[0] && ta[1]==qp[1]){
			printf("Horse will cut the queen");
			FLAG=1;
			break;
		}
		ta[0]=hp[0];
		ta[1]=hp[1];
		ta[0]-=2;
		ta[1]-=1;
		if(ta[0]==qp[0] && ta[1]==qp[1]){
			printf("Horse will cut the queen");
			FLAG=1;
			break;
		}
		ta[0]=hp[0];
		ta[1]=hp[1];
		ta[0]+=1;
		ta[1]-=2;
		if(ta[0]==qp[0] && ta[1]==qp[1]){
			printf("Horse will cut the queen");
			FLAG=1;
			break;
		}
		ta[0]=hp[0];
		ta[1]=hp[1];
		ta[0]-=1;
		ta[1]+=2;
		if(ta[0]==qp[0] && ta[1]==qp[1]){
			printf("Horse will cut the queen");
			FLAG=1;
			break;
		}
		ta[0]=hp[0];
		ta[1]=hp[1];
		ta[0]+=2;
		ta[1]-=1;
		if(ta[0]==qp[0] && ta[1]==qp[1]){
			printf("Horse will cut the queen");
			FLAG=1;
			break;
		}
		ta[0]=hp[0];
		ta[1]=hp[1];
		ta[0]-=2;
		ta[1]+=1;
		if(ta[0]==qp[0] && ta[1]==qp[1]){
			printf("Horse will cut the queen");
			FLAG=1;
			break;
		}

		if(FLAG==0){
			FLAG=1;
			printf("Horse will not cut the queen");
		}
	}
	getch();
}
