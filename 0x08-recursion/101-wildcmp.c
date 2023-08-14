#include"stdio.h"

/**
 * wildcmp_helper - function to compare two strings with wildcard support
 * @s1: represents the first string that you want to compare.
 * @s2: represents the second string that you want to compare.
 *
 * Return: Characters don't match.
 */


int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1); /*Both strings are empty, they match*/
	}
	if (*s2 == '*' && *(s2 + 1) == '\0')
	{
		return (1);/*s2 ends with *, so it can match any remaining characters in s1*/
	}
	if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);/* One string is empty, the other is not; they can't match*/
	}
	/* Recursive cases */
	if (*s2 == '*')
	{
		return (wildcmp_helper(s1 + 1, s2) || wildcmp_helper(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (wildcmp_helper(s1 + 1, s2 + 1));
	}

	return (0);/* Characters don't match*/
}
/**
 * wildcmp - Function to compare two strings with wildcard support.
 * @s1:  represents the first string that you want to compare.
 * @s2:  represents the Second string that you want to compare.
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
