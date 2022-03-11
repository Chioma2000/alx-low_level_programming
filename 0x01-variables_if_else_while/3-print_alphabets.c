#include <stdio.h>

/**
* main - print alphabet in lower and uppercase
*
*
* Return: (0) Success
*/
int main(void)
{
	char ch;
	char up;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (up = 'A' ; up <= 'Z' ; up++)
	{
		putchar(up);
	}
		putchar('\n');
	return (0);
}
