#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *chaystack;
	char *cneedle;

	while (*haystack != '\0')
	{
		chaystack = haystack;
		cneedle = needle;

		while (*haystack != '\0' && *cneedle != '\0' && *haystack == *cneedle)
		{
			haystack++;
			cneedle++;
		}
		if (!*cneedle)
		{
			return (chaystack);
		}
		haystack = chaystack + 1;
	}
	return (0);
}
