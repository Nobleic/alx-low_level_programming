#include <stdio.h>
#include "main.h"
/**
* _strlen_recursion(char *s)- this returns the length of a string
* @s: pointer to string
* Return: returns an integer
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = 1 + _strlen_recursion(s + 1);
	}
	return (length);
}

