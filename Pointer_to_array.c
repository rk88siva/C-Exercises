#include<stdio.h>

int num[2][3]={
               {23,34,54},
               {34,67,89}
              };

void main(void)
{
    int i,j;
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("array num[%d][%d]=%d \t",i,j,num[i][j] );
        }
        printf("\n");
    }

}
