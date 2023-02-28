#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: pointer to string
 * Return: converted integer
 */

int _atoi(char *s)
{
	int sign = 1;   // sign as positive
	int result = 0; // result as 0

	// Skip white spaces
	while (*s == ' ')
		s++;
	// count signs
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	// Convert digits to intege	
	while (*s >= '0' && *s <= '9')
	{
		// Check for overflow
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && *s - '0' > INT_MAX % 10))
		{
			// Overflow occurred
			return sign == 1 ? INT_MAX : INT_MIN;
		}
		// Update result
		result = result * 10 + (*s - '0');
		// Move to the next character
		s++;
	}
	return (sign * result);
}
