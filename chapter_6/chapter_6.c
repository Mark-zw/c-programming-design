#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (int i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr1[10] = { 0,1,2,3,4 };
//	int arr2[10] = { 0,0,0,0,0,0,0,0,0,0 };
//	int arr3[10] = { 0 };
//	int arr4[] = { 1,2,3,4,5 };
//	int* pa[10] = { arr,arr1,arr2,arr3,arr4 };
//	char ch[10] = { 'A','B','C','D' };
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int feb[30];
//	feb[0] = feb[1] = 1;
//	for (int i = 2; i < 30; i++)
//	{
//		feb[i] = feb[i - 2] + feb[i - 1];
//	}
//	for (int i = 0; i < 30; i++)
//	{
//		if (i % 5 == 0)
//			printf("\n");
//		printf("%12d ", feb[i]);
//
//	}
//	return 0;
//}

//#include<stdio.h>
//void Swap(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	//int arr[10] = { 9,7,7,8,6,4,3,2,1,5 };
//	int arr[10];
//	printf("Please enter 10 numbers:");
//	for (int i = 0; i < 10; i++)
//		scanf("%d", arr + i);
//	//冒泡法排序 --- 升序
//	//2.再控制外层排序
//	for (int i = 9; i >= 1; i--)
//	{
//		//1.先控制单趟排序
//		for (int j = 1; j <= i; j++)
//		{
//			if (arr[j - 1] > arr[j])
//				Swap(arr + j - 1, arr + j);
//		}
//	}
//	//3.打印数组内容
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//float pay[3][6];
//	//float arr[3][7][10][19];
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	int arr1[2][3] = { 1,2,3,4,5,6 };
//	int arr2[][4] = { 11,21,21,24,80,99,23,43,52,13,143,1,2};
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int brr[3][2];
//	for (int i = 0; i < 2; i++)
//		for (int j = 0; j < 3; j++)
//			brr[j][i] = arr[i][j];
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,7,8,9,24,77,97,3,21,4,5,41 };
//	int max = arr[0][0];
//	int i, j;
//	//1.找出最大值
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (max < arr[i][j])
//				max = arr[i][j];
//		}
//	}
//	//2.找到最大值对应的元素
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (max == arr[i][j])
//				goto here;
//		}
//	}
//here:
//	printf("max is arr[%d][%d]:%d\n", i, j, max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char s[] = "I am fine";
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char s[] = "Hello C!";
//	printf("%s\n", s);
//	printf("%s\n", "happy new day!");
//	scanf("%s", s);
//	printf("%s\n", s);
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char str1[20], str2[20], str3[20];
//	scanf("%s%s%s", str1, str2, str3);
//	printf("%s %s %s\n", str1, str2, str3);
//	printf("%p %p %p\n", str1, str2, str3);
//
//	printf("%o %o %o\n", str1, str2, str3);
//	printf("%d %d %d\n", str1, str2, str3);
//	puts(str1);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str[20];
//	gets(str);
//	puts(str);
//	
//	return 0;
//}

//#include<stdio.h>
////#include<string.h>
//int main()
//{
//	char str1[30] = "People's Republic of ";
//	char str2[10] = "China";
//	printf("%s\n", strcat(str1, str2));
//	char str3[30];
//	strcpy(str3, str1);
//	printf("%s\n", str3);
//	strcpy(str3, "China");
//	printf("%s\n", str3);
//	strncpy(str3, str1, 2);
//	printf("%s\n", str3);
//
//	return 0;
//}