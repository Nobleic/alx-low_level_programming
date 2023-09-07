#include <stdio.h>
#include "main.h"
/**
* _print_rev_recursion(char *s)-reverses a string
* @s: poiner to string
* Return: return void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
