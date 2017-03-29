
/* ************************** Inclusion directives ************************** */
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "fibonacci.h"



/******************************************************************************
* Function Name:  main
**************************************************************************//**
*   @brief      main function
*   @param[in]  None
*   @param[out] None
*   @retval     None
*   @warning    None
*   @remark     None
*//***************************************************************************/
int main(void)
{
	int num = 0;   //declared a number n for f(n)
	
	printf("Enter the value of n in f(n) : ");
	scanf("%d", &num);

	/*check that the entered number is positive. If not ask again to enter the number*/
	while(num < 0)
	{
		printf("\nTry again with positive number");
		printf("\nEnter the value of n in f(n) : ");
		scanf("%d", &num);
	}

	fibonacci(num);

	return 0;
}
