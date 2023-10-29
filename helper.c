#include "main.h"

/**
 * helper - The fanction name
 * @n: n integer
 *
 * Author: Thaoban Abdrasheed
 * Return: int
 */
int helper(int n)
{
	u_int32_t i = 2;
	u_int32_t fac;


	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			fac = n / i;
			printf("%d=%d*%d\n", n, fac, i);
			break;
		}
	}
	return (0);
}
