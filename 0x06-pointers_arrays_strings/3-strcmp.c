#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string tw0
 * Return: str1 , str2
 */

int _strcmp(char *s1, char *s2)
{
	int len;

	for (len = 0 ; s1[len] && s2[len] ;)
	{
		if (s1[len] == s2[len])
			len++;
		else
			break;
	}
	return (s1[len] - s2[len]);
}
