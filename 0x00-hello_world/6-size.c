#include <stdio.h>

/**
 * main - C program that prints the size of various types
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf(sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(f));
    return (0);
}
