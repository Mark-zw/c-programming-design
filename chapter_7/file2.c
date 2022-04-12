//#define _CRT_SECURE_NO_WARNINGS
//
//extern  A;
//int power(int x, int y)
//{
//	int a = 1;
//	for (int i = 0; i < y; i++)
//		a *= x;
//	A = a;
//	return A;
//}

void delete_string(char str[], char ch)
{
	int i, j;
	for (i = j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ch)
			str[j++] = str[i];
	}
	str[j] = '\0';
}