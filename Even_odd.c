# include<stdio.h>


void main()

{
    int a[24];
    int i;

        for(i=1;i<25;i++)
            {
             printf("the number=%d\n",i);
             a[i]=i;

             if(a[i]%2==0)
                {
                    printf("Given no is Even\n");
                }

                    else
                        printf("Odd no\n");
            }


}
