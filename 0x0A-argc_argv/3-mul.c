#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts str to int
 * @s: str
 * Return: convert
 */
int _atoi(char *s)
{
	int i, j, k, l, f, d;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	f = 0;
	d = 0;
	while (s[l] != '\0')
		l++;
	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (j % 2)
				d = -d;
			k = k * 10 + d;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	return (k);
}
/**
 * main - multiply 2 numb
 * @argc: num
 * @argv: arr
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;
	printf("%d\n", result);
	return (0);
}
