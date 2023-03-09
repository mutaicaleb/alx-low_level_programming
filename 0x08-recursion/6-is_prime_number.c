#include "main.h"
/**
* is_prime_number - returns a prime number
* @n: takes in an integer
* Return: 1 if n a prime number or 0 if not prime
**/
int is_prime_number(int n)
{
if (n == 1 || n < 0)
return (0);
return (number(2, n));

}
/**
* number - help me to find the prime number
* @x: integer
* @n: integer
* Return: 1 if prime or 0 if not
**/
int number(int x, int n)
{
	if (n == x)
		return (1);
	else if (n % x == 0)
		return (0);
	return (number(x + 1, n));
}
