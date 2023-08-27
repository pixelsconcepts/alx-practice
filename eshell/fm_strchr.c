#include "fm_main.h"

/**
 * _strchr - returns a point to the first occurance of a character in a string.
 * @s: string to search for the character in.
 * @c: char to the search for.
 *
 * Return: pointer to char or else NULL.
 */
/*char *_strchr(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + i));
	return (0);
}*/

char *_strchr(const char *str, int ch)
{
    while (*str != '\0') {
        if (*str == ch) {
            return (char *)str;
        }
        str++;
    }
    return NULL;  /*Character not found*/
}
