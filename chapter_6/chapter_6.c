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

////字符串比较
//#include<stdio.h>
//int main()
//{
//	char str1[30] = "Kandom", str2[30] = "king ring", str3[30] = "Kandomary";
//	//scanf("%s%s", str1, str2);
//	int ret = strcmp(str1, str2);
//	if (ret > 0)
//		printf("%s is bigger than %s\n", str1, str2);
//	else if (ret == 0)
//		printf("%s is equal to %s\n", str1, str2);
//	else
//		printf("%s is smaller than %s\n", str1, str2);
//	printf("the length of %s is %d\n", str1, strlen(str1));
//	printf("the length of %s is %d\n", str2, strlen(str2));
//	printf("the length of %s is %d\n", str3, strlen(str3));
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str[] = "China";
//	printf("%s\n", str);
//	strlwr(str);
//	printf("%s\n", str);
//	strupr(str);
//	printf("%s\n", str);
//
//	return 0;
//}

////统计单词数量
//#include<stdio.h>
//int main()
//{
//	//思路，单词的数量应该比空格的数量多一个，
//	//eg：I am student who is studing computer science by myself（10个单词，9个空格）
//	//用一个较大的字符数组来存储一句话
//	char str[200];
//	gets(str);
//	int count = 0;//统计空格的数量
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (str[i] == ' ')
//			count++;
//	}
//	printf("%d words\n", count + 1);
//}

////找出三个字符串中的最大值
//#include<stdio.h>
//int main()
//{
//	char str[3][20];
//	char max[20];
//	for (int i = 0; i < 3; i++)
//		gets(str[i]);
//	for (int i = 0; i < 3; i++)
//	{
//		if (strcmp(str[0], str[1]) > 0)
//			strcpy(max, str[0]);
//		else
//			strcpy(max, str[1]);
//		if (strcmp(str[2], max) > 0)
//			strcpy(max, str[2]);
//	}
//	printf("the max string is %s\n", max);
//	return 0;
//}

//课后习题
////1.100之内所有素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	//2.再控制外层循环从2-100
//	for (int i = 2; i <= 100; i++)
//	{
//		int flag = 1;//1表示素数 0表示不是素数
//		//1.判断一个数是否为素数
//		for (int j = 2; j <= sqrt(i); j++)
//			if (i % j == 0)
//				flag = 0;
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

////2.选择法排序
//#include<stdio.h>
//void Swap(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int arr[] = { 1,2,7,9,0,3,4,6,8,2,4 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//2.再控制排序的趟数
//	for (int i = 0; i < size - 1; i++)
//	{
//		//1.先控制一趟排序，从数组中选出最小的元素，将其与最左边未排序元素交换
//		int index = i;//记录最小元素的下标
//		int min = arr[i];//假设最小值是左边未排序的第一个元素
//		for (int j = i + 1; j < size; j++)
//		{
//			if (arr[j] < min)
//			{
//				min = arr[j];
//				index = j;
//			}
//		}
//		Swap(&arr[i], &arr[index]);
//	}
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

////3.求3*3整型矩阵对角线元素
//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { 
//		{1,2,3},
//		{4,5,6},
//		{7,8,9} };
//	int sum = arr[0][0] + arr[1][1] + arr[2][2];
//	printf("sum is %d\n", sum);
//	return 0;
//}

