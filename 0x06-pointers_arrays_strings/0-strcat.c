#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x, i;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
		x = 0;

	while (src[k] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}

	dest[i] = '\0';
	return (dest);
}
