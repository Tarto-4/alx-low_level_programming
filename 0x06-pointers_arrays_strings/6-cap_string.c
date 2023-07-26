#include "main.h"

/**
 *cap_string - capitalizes all words of a string.
 *@s: pointer
 * Return: return s.
 */
char *cap_string(char *s)
{
	int a = 0, i;
	int sp = 13;
	char sp1[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < sp)
		{
			if ((a == 0 || s[a - 1] == sp1[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
