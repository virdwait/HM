#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *a, const void * b){
    return ( *(char *)a - *(char *)b );
}
void swap(char* a, char* b){
    char t=*a;
    *a=*b;
    *b=t;
}
int findstr(char str[], char first, int l, int h){
    int strIndex=l,i;
    for(i=l+1;i<=h;i++)
	if(str[i]>first&&str[i]<str[strIndex])
	    strIndex=i;
    return strIndex;
}
void sortedPermutations(char str[]){
    int size = strlen(str),isFinished;
    qsort(str, size, sizeof( str[0] ), compare);
    isFinished = 0;
    while (!isFinished){
	static int x = 1;
	int i;
	printf("%d  %s \n", x++, str);
	for (i=size-2;i>=0;--i)
	    if (str[i]<str[i+1])
		break;
	if (i == -1)
	    isFinished = 1;
	else{
	    int strIndex = findstr(str, str[i], i + 1, size - 1);
	    swap(&str[i], &str[strIndex]);
	    qsort(str+i+1, size-i-1, sizeof(str[0]), compare);
	}
    }
}
void main(){
    char str[20];
    clrscr();
    printf("Enter the string : ");
    scanf("%s",str);
    sortedPermutations( str );
    getch();
}