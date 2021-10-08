#include "holberton.h"
/**
 * _putbin - prints the binary representation of a number
 * @num: input integer
 * @format: the format to use to prepare the string
 * Return: length of binary
 */
char *_putbin(va_list num, __attribute__((unused)) printing_format * format)
{
	unsigned int n = va_arg(num, unsigned int);
	unsigned int test = _pow(2, sizeof(unsigned int) * BIT_SIZE - 1);
	bool start = false;
	char *bin = malloc(sizeof(char) * (1 + n / 2) + 1), *_bin;

	if (!bin)
		return (NULL);
	_bin = bin;
	if (n == 0)
		*bin = '0';
	else
		while (test)
		{
			if (!(test & n) && start)
				*_bin = '0', _bin += 1;
			else if (test & n)
				*_bin = '1', start = true, _bin += 1;
			test = test >> 1;
		}

	*_bin = '\0';
	return (bin);
}
