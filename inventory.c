# include<stdio.h>
# define ITEMS 4

void main()
{
    int i,quantity[5];
    float rate[5],value,total_value;
    char code[5][5];

    while(i<=ITEMS)
    {
        printf("Enter code,quantity,and rate:");
        scanf("%s %d %f ",code[i],&quantity[i],&rate[i]);
        i++;
    }

printf("\n\n");
printf("Inventory report\n");
printf("...............\n");
printf("code quality rate value\n");
printf("...................\n");

// preparation of the inventory position //

total_value =0;
i=1;

while(i<=ITEMS)
{
    value=quantity[i]*rate[i];
    printf("%s %d %f %e",code[i],quantity[i],rate[i],value);
    total_value+=value;
    i++;

}


printf("............\n");
printf("total value = %e\n",total_value);
printf("............\n");


}
