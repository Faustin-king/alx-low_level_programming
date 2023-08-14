#include"stdio.h"
#include"string.h"


/**
 * is_palindrome_helper - function to check if a string is a palindrome.
 * @s: This parameter represents a pointer to the first
 * character of the string that you want to check for palindrome property
 * @start: This parameter represents the index of the current
 * character that you're comparing from the beginning of the string.
 * @end: This parameter represents the index of the current character
 * that you're comparing from the end of the string.
 *
 * Return:  Recur with next characters
 */


int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);/*characters have been compared without mismatch*/
	}

	if (s[start] != s[end])
	{
		return (0);/*Characters at start and end do not match*/
	}
	return (is_palindrome_helper(s, start + 1, end - 1));

}

/**
 * is_palindrome - Function to check if a string is a palindrome.
 * @s: a pointer to the first character of the string
 * that you want to check for palindrome property.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
