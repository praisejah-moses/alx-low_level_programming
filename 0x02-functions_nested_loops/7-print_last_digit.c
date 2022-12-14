#include "main.h"

/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number c
 */
int print_last_digit(int c)
{
	if (c > 0 || c == 0)
	{
	_putchar (c % 10 + '0');
	return (c % 10);
	}
	else
	{
	c = c * -1;
	_putchar (c % 10 + '0');
	return (c % 10);
	}
}
