#include "main.h"

/**
 * factorial - Finds the factorial of int
 * @n: An int
 *
 * Return: int
 */

int factorial(int n)
{

if (n < 0)
{
	return (-1);
}
else if (n == 0)
{
	return (1);
}

return (n * factorial(n - 1));

}
