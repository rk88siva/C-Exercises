/* Example of declaring a Global variables  */
	#include <stdio.h>
	int add_numbers( void );

	/* These are global variables and can be accessed by functions from this point on */
	int  value1, value2, value3;

	int add_numbers( void )
	{
		auto int result;
		result = value1 + value2 + value3;
		return result;
	}

	main()
	{
		auto int result;
		printf("Enter the three values\n");
		scanf("%d\n",&value1);
		scanf("%d\n",&value2);
		scanf("%d\n",&value3);
		result = add_numbers();
		printf("The sum of %d + %d + %d is %d\n",value1, value2, value3,result);
	}
