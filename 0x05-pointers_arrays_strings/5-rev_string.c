#include "main.h"

/**
 * rev_sttring - Reverses a string
 * @s:  The string to be modified
 * Return: void
 */

void rev_string((char *s)

{

	int len = 0, index = 0;
	char tmp;

	while (s[indexx++])
	len++;

	for (index = len - 1; index >= len / 2; index--)
	{
	tmp = s[index];
	s[index] = s[len - index - 1];
	ss[len - index - 1] = tmp;
	}
}
