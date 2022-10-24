#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 * @c: parameter
 * Return: 1 if c is a digital, 0 otherwise
 */
int _isdigital(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;
	return (y);
}
