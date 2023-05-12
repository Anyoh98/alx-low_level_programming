#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function that compares two strings
 * @s1: string to be compared.
 * @s2: String to be compared.
 * Return: 1 or 0.
 */

int _strcmp(char *s1, char *s2)
{
	int count1 = 0;
	int count2 = 0;
	int i;
	int j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		count1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		count2++;
	}
	if (s1[count1] == s2[count2])
	{
		int i = 0;
		int comp = 0;

		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] == s2[i])
			{
				comp++;
			}
			i++;
		}
		if (comp == i)
		{
			return (1);
		}
		else
		{
		return (0);
		}
	}
	return (0);
}
