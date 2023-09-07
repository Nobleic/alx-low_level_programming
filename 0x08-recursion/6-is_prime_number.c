#include <stdio.h>
#include "main.h"
int isPrime(int n, int d);


/**
* is_prime_number(int n)- checks if a number is prime
* @n: the number param
* Return: returns integer
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isPrime(n, 2));
}

/**
* isPrime(int n, int d)- returns 1 if n is prime else zero
* @n: the number param
* @d: the divisor
* Return: returns an integer
*/

int isPrime(int n, int d)
{
	if (d < n)
	{
		if ((n % d) != 0)
			return (isPrime(n, d + 1));
		return (0);
	}
	return (1);
}
