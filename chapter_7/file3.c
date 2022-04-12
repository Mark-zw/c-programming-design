#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print_string(char str[])
{
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i++]);
	}
}