#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char put[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(put[i]);
	}
	_putchar('\n');
	return (0);
}
