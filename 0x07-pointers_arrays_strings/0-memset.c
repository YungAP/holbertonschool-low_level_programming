#include "main.h"

/**
* _memset - sets memory
* @s: pointer to mem being filled
* @b: filling memory
* @n: numner of bytes filling
* Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;

	return (s);
}

