# include<stdio.h>



void main()
{
    int m,n,i,j;
    printf("The Array length Rows and columns");
    Scanf("%d%d",&m,&n);
    i=m;j=n;
    int a[i][j];
    int b[j][i];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
    printf("Enter the value of the Array Element a[%d][%d]=%d",i,j,a[i][j]);
    scanf("%d",&a[i][j]);
    }
    }

}
