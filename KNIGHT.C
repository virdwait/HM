#include<stdio.h>
#include<conio.h>
void main(){
	int x,y,p=0;
	clrscr();
	printf("Enter xy value between 0-7\n");
	scanf("%d%d",&x,&y);
	if(x+2<8 && y+1<8)
		p++;
	if(x+1<8 && y+2<8)
		p++;
	if(x-2>=0 && y-1>=0)
		p++;
	if(x-1>=0 && y-2>=0)
		p++;
	if(x+2<8 && y-1>=0)
		p++;
	if(x+1<8 && y-2>=0)
		p++;
	if(x-2>=0 && y+1<8)
		p++;
	if(x-1>=0 && y+2<8)
		p++;
	printf("The probability that the knight stays in the board is %d",p);
	getch();
}
