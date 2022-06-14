#include "main.h"
/**
 * print_S - Struct op
 *
 * @args: The operator
 *Return: nothhing
 */
int print_S(va_list args)
{
	int i;
	int sum = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			sum += 2;
		}
		else
		{
			_putchar(str[i]);
			sum++;
		}
	}
	return (sum);
}
/**
 * print_b - Struct op
 *
 * @args: The operator
 *Return: nothhing
 */
int print_b(va_list args)
{
	int i = 0, sum = 0, arr[32];
	unsigned int realNumber;

	realNumber = va_arg(args, unsigned int);
	if (realNumber == 1 || realNumber == 0)
	{
		_putchar(realNumber + '0');
		sum++;
	}
	else
	{
		while (realNumber > 0)
		{
			arr[i] = realNumber % 2;
			realNumber /= 2;
			i++;
		}
		for (i -= 1; i >= 0; i--)
		{
			_putchar(arr[i] + '0');
			sum++;
		}
	}
	return (sum);
}
/**
 * print_u - Struct op
 *
 * @args: The operator
 *Return: nothhing
 */
int print_u(va_list args)
{
	unsigned int sum = 0, i = 1;
	unsigned int realNumber;

	realNumber = va_arg(args, unsigned int);
	while (realNumber / i > 9)
	{
		i *= 10;
	}
	while (i != 0)
	{
		_putchar('0' + realNumber / i);
		realNumber %= i;
		i /= 10;
		sum++;
	}
	return (sum);
}
