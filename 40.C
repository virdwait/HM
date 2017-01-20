#include<stdio.h>
#include<conio.h>
void main(){
    int i=0,j=0,temp[9],FLAG=0,pvt,at=0,t,el;
    long int start=123456789,tempnum,m,adstart;

    clrscr();

    while(start<=987654321 && at<5){
	i=8;
	tempnum=start;
	while(i>=0 && FLAG==0){
	    if(tempnum%10==0){
		FLAG=1;
	    }
	    temp[i]=tempnum%10;
	    tempnum=tempnum/10;
	    i--;
	}
	if(FLAG==0){
	    //SORT IT
	    j=0;
	    while(i<8){
		el=temp[i];
		j=i;
		while(j<9){
		    if(temp[i]>temp[j]){
			t=temp[i];
			temp[i]=temp[j];
			temp[j]=t;
		    }
		    j++;
		}
		i++;
	    }
	    //SORTING IS DONE
	    //Now check for repetetion
	    i=0;
	    while(i<9 && FLAG==0){
		if(temp[i]!=i+1){
		       FLAG=1;
		}
		i++;
	    }
	}
	if(FLAG==0){
	    //Here we have to check whether prime or not.
		m=2;
		adstart=start+1;
		while(m<adstart/2 && FLAG==0){
		    if(adstart%m==0){
			FLAG=1;
		    }
		    m++;
		}
	}
	if(FLAG==0){
	    printf("\n%ld is a prime number",adstart);
	    at++;
	}
	FLAG=0;
	start++;

    }
    getch();
}