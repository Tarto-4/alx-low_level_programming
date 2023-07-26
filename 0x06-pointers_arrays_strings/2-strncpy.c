#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: Destination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: largest number of bytes to copy
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
