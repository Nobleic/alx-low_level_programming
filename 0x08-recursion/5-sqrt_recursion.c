#include <stdio.h>
#include "main.h"

int checksqrt(int n, int i);

/**
* _sqrt_recursion(int n)- returns the square root of a number
* or returns -1 if the squareroot is not an integer
* @n: this is the number param
* Return: returns an int
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (checksqrt(n, 0));
}

/**
* checksqrt(int n, int i)- checks for the square root of number
* @n: the number to be operated on
* @i: the counter
* Return: returns an integer
*/

int checksqrt(int n, int i)
{
	if (i * i < n)
		return (checksqrt(n, i + 1));
	else if (i * i == n)
		return (i);
	return (-1);
}
