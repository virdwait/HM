#include<stdio.h>
#include<conio.h>
void towerOfHanoi(int n, char start, char end, char mid){
    if (n==1){
        printf("\n Move disk 1 from rod %c to rod %c", start, end);
        return;
    }
    towerOfHanoi(n-1, start, mid, end);
    printf("\n Move disk %d from rod %c to rod %c", n, start, end);
    towerOfHanoi(n-1, mid, end, start);
}
 
void main(){
    int n;
    clrscr();
    printf("Enter number of disks : ");
    scanf("%d",&n); 
    towerOfHanoi(n, 'A', 'C', 'B');
    getch();
}