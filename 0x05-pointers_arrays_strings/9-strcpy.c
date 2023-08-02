#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: A buffer to copy the string to
 * @src: The source string to copy
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
