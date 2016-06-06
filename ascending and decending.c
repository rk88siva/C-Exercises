#include<stdio.h>
//int ascend(int x);
main()
{
int a[5], i=0, j=0, n, x;
    /*Enter the number of elements in the matrix*/
	printf ("\n Enter the no. of elements: ");
	scanf ("%d", &n);
	printf ("\n");
/*Scan the random 5 numbers in the matrix elements */
	for (i = 0; i <n; i++)
	{
		printf ("\n Enter the %dth element: ", (i+1));
		scanf ("%d", &a[i]);
	}
/*Arrange the elements in order*/
	for (j=0 ; j<(n-1) ; j++)
	{
		for (i=0 ; i<(n-1) ; i++)
		{
			if (a[i+1] < a[i])
			{
				x = a[i];
				a[i] = a[i + 1];
				a[i + 1] = x;
			}
		}
	}

printf ("\n Ascending order: ");
	for (i=0 ; i<n ; i++)
	{
		printf (" %d", a[i]);
	}

	printf ("\n Descending order: ");
	for (i=n ; i>0 ; i--)
	{
		printf (" %d", a[i-1]);
	}

      /* indicate successful completion */
      return 0;
}
