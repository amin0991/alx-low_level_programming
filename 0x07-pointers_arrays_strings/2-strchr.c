#include "main.h"

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	for (i = 0; i != '\0'; i++)
	{
		if(s[i] == c)
			return (s);

	}
	if (c == '\0')
		return (s);
	return (0);
}
