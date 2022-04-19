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

//#include<stdio.h>
//int main(int argc,char* argv[])
//{
//	while (argc > 1)
//	{
//		printf("%s\n", *argv);
//		++argv;
//		--argc;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	*p1 = 2;
//	printf("%d", *p1);
//	return 0;
//}

/* malloc example: random string generator*/
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */

//int main()
//{
//    int i, n;
//    char* buffer;
//    printf("How long do you want the string?\n");
//    scanf("%d", &i);
//    buffer = (char*)malloc(i + 1);
//    if (buffer == NULL) exit(1);
//    for (n = 0; n < i; n++)
//        buffer[n] = rand() % 26 + 'a';
//    buffer[i] = '\0';
//    printf("Random string: %s\n", buffer);
//    free(buffer);
//    return 0;
//}

//#include<stdio.h>
////#include<stdlib.h>
//int main()
//{
//	/*int* arr1 = (int*)malloc(10 * sizeof(int));
//	int* arr2 = (int*)calloc(10, sizeof(int));
//	int* arr3 = (int*)realloc(arr2, 2000 * sizeof(int));
//	free(arr1);
//	free(arr3);*/
//	int a = 2;
//	void* p = &a;
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//void Check(int* score,int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (score[i] < 60)
//			printf("%3d", score[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int* score = (int*)malloc(5 * sizeof(int));
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", score + i);
//	}
//	Check(score,5);
//	return 0;
//}

//¿ÎºóÏ°Ìâ

//1.