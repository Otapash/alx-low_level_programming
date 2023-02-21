#include "main.h"

/**
 * print_alphabet - prints alphabets
 *
 * Description: a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet(void)
{
	char lara = 'a';

	while (lara <= 'z')
	{
		_putchar (lara);
		lara++;
	}
	_putchar ('\n');
}
