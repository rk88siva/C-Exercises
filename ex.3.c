# include<stdio.h>

void largest(int *ptr);


void main()
{
    int a[4][4]={{12,23,34,54},
                {34 ,20,45,90},
                {2,34,14,10},
                {99,31,100,22}};

    int i,j;
    int ptr1=a[0][0];
    for(j=0;j<4;j++)
        for(i=0;i<4;i++)
            {
                printf("Value of a[%d][%d]=%d \n",i,j,a[i][j]);
            }

    int b[4][4];

    for(j=0;j<4;j++)
    {
        for(i=0;i<4;i++)
            {
                b[i][j]=a[i][j];
                printf("Value of b[%d][%d]=%d \n",i,j,b[i][j]);
            }

    }



}
