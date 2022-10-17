#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer
 *
 * Return: o
*/
int main(void)
{
	char m;
	int n;
	long int o;
	long long int p;
	float q;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(m));
	printf("Size of a int: %lu byte(S)\n", (unsigned long)sizeof(n));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(o));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(p));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(q));
	return (0);
}
