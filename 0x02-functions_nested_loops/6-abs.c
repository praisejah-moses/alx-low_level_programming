#include "main.h"

/**
 *_abs - function that computes the absolute value of an integer
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number r
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
