#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Will check if n is a prime number
 * @n: Is an integer
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - Will check n if they can divide it
 * @n: Is an integer
 * @resp: also an integer
 *
 * Return: int
 */

int check_prime(int n, int resp)
{

if (resp >= n && n > 1)
	return (1);
else if (n % resp == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, resp + 1));
}
