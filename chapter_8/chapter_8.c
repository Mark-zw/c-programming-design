#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	float b = 0;
//	//int* pa;
//	//float* pb;
//	//pa = &a;
//	//pb = &b;
//	int* pa = &a;
//	float* pb = &b;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = &arr[0];
//	int* p2 = arr;
//	printf("%d", (p1 + 5) - p2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (; i < 10; i++)
//		printf("%-2d", arr[i]);
//	printf("\n----------------------------\n");
//	for (i = 0; i < 10; i++)
//		printf("%-2d", *(arr + i));
//	printf("\n----------------------------\n");
//	for (int* p = arr; p < arr + 10; p++)
//		printf("%-2d", *p);
//
//	return 0;
//}

////逆置数组
//#include<stdio.h>
//int main()
//{
//	void Reverse_Array(int* arr, int size);
//	void Print_Array(int* arr, int size);
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Reverse_Array(arr, size);
//	Print_Array(arr, size);
//	return 0;
//}
//void Reverse_Array(int* arr, int size)
//{
//	int begin = 0;
//	int end = size - 1;
//	while (begin < end)
//	{
//		//int temp = arr[begin];
//		//arr[begin++] = arr[end];
//		//arr[end--] = temp;
//		int temp = *(arr + begin);
//		*(arr + begin++) = *(arr + end);
//		*(arr + end--) = temp;
//	}
//}
//void Print_Array(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%2d", *(arr + i));
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	int* p;
//	for (p = arr[0]; p < arr[0] + 12; p++)
//	{
//		if ((p - arr[0]) % 4 == 0)
//			printf("\n");
//		printf("%4d", *p);
//	}
//	printf("\n");
//	p = arr[0];
//	for (p = arr[0]; p < arr[0] + 12; p++)
//	{
//		if ((p - arr[0]) % 4 == 0)
//			printf("\n");
//		printf("%10p", p);
//	}
//	printf("\n");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	int(*p)[4] = &arr[0];
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%10p", p++);
//	}
//	printf("\n");
//	p = &arr[0];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//			printf("%3d", p[i][j]);
//		printf("\n");
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//			printf("%10p", &p[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str[] = "I love China!";
//	printf("%c\n", str[7]);
//	for (int i = 0; i < (sizeof(str)/sizeof(str[0])); i++)
//	{
//		if (i == 7)
//			printf("%c\n", str[i]);
//	}
//	printf("%c\n", *(str + 7));
//	for (int i = 0; i < (sizeof(str) / sizeof(str[0])); i++)
//	{
//		if (i == 7)
//			printf("%c\n", *(str + i));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* str = "I love China!\n";
//	printf("%s", str);
//	printf("%c", str[0]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str1[] = "I am a student.";
//	char str2[30];
//	char* p1 = str1, *p2 = str2;
//	while (*p1 != '\0')
//	{
//		*(p2++) = *(p1++);
//	}
//	*p2 = *p1;
//	printf("%s", str2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a[] = "I am a boy.", b[20];
//	char* p1 = a, * p2 = b;
//	for (int i = 0; *(p1) != '\0'; p1++, p2++)
//		*p2 = *p1;
//	*p2 = '\0';
//	printf("%s", b);
//	return 0;
//}
//#include<stdio.h>
//void StrCopy(char* str1, char* str2)//将str2中的内容复制到str1当中
//{
//	//while (*str2 != '\0')
//	//{
//	//	*str1++ = *str2++;
//	//}
//	//*str1 = *str2;
//	//while(( * str1++ = *str2++) != '\0')
//	//{ }
//	while (*str1++ = *str2++)
//	{ }
//}
//int main()
//{
//	char str1[] = "I am a teacher in high school!";
//	char str2[50];
//	StrCopy(str2, str1);
//	printf("%s\n", str2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//char* str = "I love computer science!";
//	char str[] = "I love computer science!";
//	printf("%s\n", str);
//	//str += 7;
//	printf("%s\n", str);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int a = 666;
//	//int b = 888;
//	//char* format = "a = %d,b = %d\n";//格式化输出
//	//printf(format, a, b);
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int(*p)[3] = arr;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			printf("%2d", p[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int Add(int x, int y);
//	int a = 1, b = 2;
//	int(* p)(int, int) = Add;
//	printf("a+b = %d\n", p(a, b));
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}

//#include<stdio.h>
//int Max(int x, int  y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int (*p)(int, int) = Max;
//	//printf("max is %d\n", (*p)(a, b));
//	printf("max is %d\n", p(a, b));
//	return 0;
//}

//#include<stdio.h>
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int min(int x, int y)
//{
//	return x < y ? x : y;
//}
//int main()
//{
//	int a, b, choose;
//	scanf("%d%d", &a, &b);
//	printf("choose: 1(max)  2(min) \n");
//	scanf("%d", &choose);
//	int(*p)(int, int);
//	if (choose == 1)
//	{
//		p = max;
//		printf("%d\n", p(a, b));
//	}
//	else if (choose == 2)
//	{
//		p = min;
//		printf("%d\n", p(a, b));
//	}
//	else
//		printf("your choose is error!\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int hour, minute, k;
//    scanf("%d:%d%d", &hour, &minute, &k);
//    minute += k;//将要睡的时间加到minute上
//    hour += minute / 60;//如果minute超过60，需要进位到hour
//    minute %= 60;//进位后，minute应该保留小于60的那部分
//    hour %= 24;//如果hour超过24，需要重新从0开始
//    printf("%02d:%02d\n", hour, minute);//%02d是前导补0式输出域宽2位
//    return 0;
//}
//#include<stdio.h>                                                                          
//int main()
//{
//	void Print();//This is a statement                                                     
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", i);
//	}
//	void (*p)();//define a pointer to function --- Print
//	p = Print;
//	p();// equel to Print()
//	(*p)();// equel to Print()                            
//	return 0;
//}
//void Print()
//{
//	printf("************************\n");
//	printf("This is a test to debug!\n");
//	printf("************************\n");
//}


//#include<stdio.h>
////#include<unistd.h>
//#include <windows.h>
//int main()
//{
//	printf("Hello Linux,Hello Makeflie\n");
//	Sleep(30000);
//	return 0;
//}

#include<stdio.h>
int main()
{
    int n, round, time;//n表示排在小乐前面的人数，round表示小乐需要等多少趟电梯
    scanf("%d", &n);
    round = n / 12;
    time = round * 4 + 2;
    printf("%d", time);
    return 0;
}