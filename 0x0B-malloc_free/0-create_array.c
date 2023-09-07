#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* create_array(unsigned int size, char c)- Creates array of characters
* @size: this is the size of the array
* @c: the first character of the array
* Return: returns a pointer to a character
*/

char *create_array(unsigned int size, char c)
{
	char *p = (char *) malloc(size * sizeof(c));
	unsigned int index;

	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
	{
		*(p + index) = c;
	}
	return (p);
}
