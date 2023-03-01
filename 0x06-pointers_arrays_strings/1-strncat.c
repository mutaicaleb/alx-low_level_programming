#include "main.h"
/**
 * _strncat - Concatenates two strings using @ bytes
 *
 * @dest: Destination String; src string is appended to it
 *
 * @src: Source string; gets appended to dest string
 *
 * @n: Number of bytes of src that should be concatenated with dest
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n)
{

	int i;

	while (dest[i] != '\0')
	{
		i++;
	}
	int j;

	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
		*)dest + i) = '\0';
	}
	return (dest);
}
