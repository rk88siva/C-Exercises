# include<stdio.h>
void printline(void);

void main()
{
    printline();
    printf("this ilustrated the function of the c program");
    printline();


}

void printline(void)
{
    int i;
    for(i=1;i<40;i++)
    printf("-");
    printf("\n");

}
