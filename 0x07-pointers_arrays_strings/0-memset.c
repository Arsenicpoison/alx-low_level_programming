#include <main.h>

/**
 * _memset - fill the th first n bytes of memory s pointed with constant byte b
 * @s:pointer to the memory s
 * @b:constant byte
 * @n: number of bytes
 * Return: A pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (; n; n--)
	{
		s[n - 1] = b;
	}
	return (s);
}
