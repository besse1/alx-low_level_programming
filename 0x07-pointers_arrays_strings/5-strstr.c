#include "main.h"

/**
 * _strstr - locates a substring.
 * @needle: The sub string to be searched
 * @haystack: The string to be searched
 * Return: If the substring is located - a pointer to the beginning
 * If the substring is not located - NULL
 */
char *_strstr(char *haystack, char *needle)

{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
