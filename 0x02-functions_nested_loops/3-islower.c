#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c: is the int that will be used as the argumentof the function
 * Return: always 0 (success)
 */
int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
