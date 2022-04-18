#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	//void sort(char* name[], int n);
//	//void print(char* name[], int n);
//	char* name[] = { "Follow me","BASIC","Great Wall","FORTRAN","Computer design" };
//	//int n = 5;
//	//sort(name, n);
//	//print(name, n);
//	char** p;
//	p = name;
//	int i = 0;
//	while (i < 5)
//	{
//		/*puts(p[i]);
//		puts('\n');*/
//		printf("%s\n", p[i]);
//		Sleep(500);
//		i++;
//	}
//	return 0;
//}
//void sort(char* name[], int n)
//{
//	char* temp;
//	int i, j, k;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//			if (strcmp(name[k], name[j]) > 0)
//				k = j;
//		if (k != i)
//		{
//			temp = name[i];
//			name[i] = name[k];
//			name[k] = temp;
//		}
//	}
//}
//void print(char* name[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%s\n", name[i]);
//}

//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int arr[5] = { 1,3,5,7,9 };
//	int* num[5] = { arr,arr + 1,arr + 2,arr + 3,arr + 4 };
//	int** p = num;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%2d\r", **(p + i));
//		Sleep(1000);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n, out = 0, i = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        int temp = 1;
//        if (n % 2 == 0)
//            temp = 0;
//        out += temp * pow(10, i++);
//        n /= 10;
//    }
//    printf("%d", out);
//    return 0;
//}

#include<stdio.h>
int main()
{
	return 0;
}