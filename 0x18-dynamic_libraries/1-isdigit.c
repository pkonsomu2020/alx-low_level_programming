#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: parameter
 * Return: 1 if c is a digital, 0 otherwise
 */

int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
