#include "main.h"
/**
 *  * print_alphabet_x10 - print lower case alphabet times ten
 *   *
 *    * Return: Always 0
 *     */
void print_alphabet_x10(void)
{
		char alpha;
			int counter;

				for (counter = 1; counter <= 10; counter++)
						{
									for (alpha = 'a'; alpha <= 'z'; alpha++)
												{
																_putchar(alpha);
																		}
											_putchar('\n');
												}
}
