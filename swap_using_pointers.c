#include<stdio.h>
int swap_mine(int *ip,int *jp);

main()
{
 int i=10;
 int j=20;
 printf("Before swaping i=%d,j=%d\n",i,j);
 swap_mine(&i,&j);
 printf("After swaping i=%d,j=%d\n",i,j);

}

int swap_mine(int *ip,int *jp)
{
    int temp ;
    temp=*ip;
    *ip=*jp;
    *jp=temp;

}
