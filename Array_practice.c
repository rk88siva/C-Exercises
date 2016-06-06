#include<stdio.h>


main()
{
int i;
int x[10],value,total;
/*Read the values of array*/
printf("Enter the values of array\n");
for (i=0;i<10;i++)
{
scanf("%d\n",&value);
x[i]=value;
}

/*Computational of total*/
total=0;
for (i=0;i<10;i++)
    total=total+x[i];
printf("\n");
for(i=0;i<10;i++)
{
    printf("x[%d]=%d\n",i+1,x[i]);
}
printf("\ntotal=%d\n",total);
}

