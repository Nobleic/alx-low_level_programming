#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* str_concat - function declaration
* @s1: string 1
* @s2: string 2
* Return: as string value
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int index;
	int concat_index = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	ptr = (char *) malloc(len * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
	{
		ptr[concat_index] = s1[index];
		concat_index++;
	}

	for (index = 0; s2[index]; index++)
	{
		ptr[concat_index] = s2[index];
		concat_index++;
	}
	return (ptr);
}
