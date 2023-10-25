#include "main.h"

/**
 * _sqrt_recursion - Should find natural square root
 * @n: An integer
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - Should find the square root
 * @n: An integer to find square root
 * @val: Is the square root
 *
 * Return: int
 */

int square(int n, int val)
{

if (val * val == n)
	return (val);
else if (val * val < n)
	return  (square(n, val + 1));
else
	return (-1);

}
