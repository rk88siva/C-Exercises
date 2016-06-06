include<stdio.h>


void main()
{
    int a,b,c,d,m,n;
    float x1,x2;
    int den,num1,num2;
    printf("Enter the number a,b,c,d,m,n = ");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,%m,&n);

    den=(a*d-c*b);
    num1=(m*d-b*n);
    num2=(n*a-m*c);

    x1=num1/den;
    x2=num2/den;

    printf("The value of X1 and X2 =%f %f",x1,x1);
}
