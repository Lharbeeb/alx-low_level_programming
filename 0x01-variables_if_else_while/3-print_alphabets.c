#include <stdio.h>
/**
 * main - prints the alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTU";
int i;
for (i = 0; i < 52; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
