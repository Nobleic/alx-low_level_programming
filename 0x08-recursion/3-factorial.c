#include <stdio.h>
#include "main.h"
/**
* factorial(int n)- returns the factorial of a number
* @n: number parameter
* Return: this returns 0
*/

int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			return (1);

		return (n * factorial(n - 1));
	}
	return (-1);
}

