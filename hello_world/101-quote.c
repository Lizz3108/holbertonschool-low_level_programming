#include <stdio.h>
#include <unistd.h>
/**
* main - Prints the ending of the quote.
* Return: Return is void (nothing will return).
*
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
