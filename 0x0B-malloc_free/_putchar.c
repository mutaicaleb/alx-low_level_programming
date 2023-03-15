#include <unistd.h>
/**
 * _putchar - prints or writes c
 * @c - the character to print
 * Return: 1 success, -1 error
 */
 
 int _putchar(char c)
{
	return(write(1, &c, 1));
}
