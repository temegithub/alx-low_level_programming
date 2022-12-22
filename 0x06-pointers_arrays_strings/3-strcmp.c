#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 *@s1: A pointer to first string to be compared
 *@s2: A pointer to second string to be compered.
 *
 *Return: if src < str1, the negatine difference of the first unmatched char
 *	if str1 == str2, *
 *	if str > str2, the positive differnce of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
