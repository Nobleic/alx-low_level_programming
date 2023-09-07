#include <stdio.h>
#include "main.h"
/**
* _pow_recursion(int x, int y)- returns x raised to power y
* @x: first param
* @y: second param
* Return: returns an int
*/

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * (_pow_recursion(x, y - 1)));
	}
	return (-1);
}

