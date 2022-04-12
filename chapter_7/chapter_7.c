#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void Print()
//{
//	printf("******************\n");
//	printf("  How do you do!\n");
//	printf("******************\n");
//}
//int main()
//{
//	Print();
//	return 0;
//}
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}

//#include<stdio.h>
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d",&a,&b);
//	printf("max is %d\n", Max(a, b));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int Sum(int, int);
//	int Sum(int x, int y);
//
//	int a, b, sum;
//	scanf("%d%d", &a, &b);
//	sum = Sum(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int Sum(int x, int y)
//{
//	return x + y;
//}

//#include<stdio.h>
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("max is %d\n", max(max(max(a, b), c), d));
//	return 0;
//}

//#include<stdio.h>
//int age(int n)
//{
//	if (n == 1)
//		return 10;
//	else
//		return age(n - 1) + 2;
//}
//int main()
//{
//	for (int i = 1; i <= 5; i++)
//	{
//		printf("%d ", age(i));
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int f(int n);
//	int x;
//	scanf("%d", &x);
//	printf("%d! = %d\n", x, f(x));
//	return 0;
//}
//int f(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return f(n - 1) * n;
//}

//#include<stdio.h>
//int main()
//{
//	void hanoi(int n, char one, char two, char three);
//	int m;
//	printf("input the number of diskes:");
//	scanf("%d", &m);
//	printf("The step to move %d diskes:\n", m);
//	hanoi(m, 'A', 'B', 'C');
//	return 0;
//}
//void hanoi(int n, char one, char two, char three)
//{
//	void move(char x, char y);
//	if (n == 1)
//		move(one, three);
//	else
//	{
//		hanoi(n - 1, one, three, two);
//		move(one, three);
//		hanoi(n - 1, two, one, three);
//	}
//}
//void move(char x, char y)
//{
//	printf("%c -> %c\n", x, y);
//}

//#include<stdio.h>
//int Max(int* arr, int* pindex,int size)
//{
//	int max = arr[0];
//	*pindex = 0;
//	for (int i = 1; i < size; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//			*pindex = i;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int arr[10] = { 19,2,3,18,7,6,4,9,81,1 };
//	int max, index;
//	max = Max(arr, &index, sizeof(arr) / sizeof(arr[0]));
//	printf("max is %d,index is %d\n", max, index);
//	return 0;
//}

//#include<stdio.h>
//float average(float* score, int n)
//{
//	float sum = score[0],avg;
//	for (int i = 1; i < n; i++)
//	{
//		sum += score[i];
//	}
//	avg = sum / n;
//	return avg;
//}
//int main()
//{
//	float score1[5] = { 98.5,97,91.5,60,55 };
//	float score2[10] = { 67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5 };
//	printf("The average of class A is %6.2f\n", average(score1, 5));
//	printf("The average of class B is %6.2f\n", average(score2, 10));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int arr[3][4] = { 12,11,23,42,2,4,5,7,97,102,23,41 };
//	int arr[][4] = { 12,11,23,42,2,4,5,7,97,102,23,41 };
//	int max = arr[0][0];
//	for(int i = 0;i<3;i++)
//		for (int j = 0; j < 4; j++)
//		{
//			if (arr[i][j] > max)
//				max = arr[i][j];
//		}
//	printf("max is %d\n", max);
//	return 0;
//}

//#include<stdio.h>
//float Min, Max;
//float GetAvg(float score[], int size)
//{
//	float sum = 0;
//	Min = Max = score[0];
//	for (int i = 0; i < size; ++i)
//	{
//		sum += score[i];
//		if (Min > score[i])
//			Min = score[i];
//		if (Max < score[i])
//			Max = score[i];
//	}
//	return sum / size;
//}
//int main()
//{
//	float score[10], avg;
//	printf("Please enter 10 number:");
//	for (int i = 0; i < 10; i++)
//		scanf("%f", score + i);
//	avg = GetAvg(score, sizeof(score) / sizeof(score[0]));
//	printf("avg = %.2f\nmax = %.2f\nmin = %.2f\n", avg, Max, Min);
//	return 0;
//}

//#include<stdio.h>
//int a = 3, b = 5;
//int main()
//{
//	int max(int a, int b);
//	int a = 8;
//	printf("max = %d\n", max(a, b));
//	return 0;
//}
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}

//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}
//#include<stdio.h>                                                                    
//int main()
//{
//	int max();
//	extern int A, B, C;
//	printf("Please enter three integer numbers:");
//	scanf("%d%d%d", &A, &B, &C);
//	printf("max is %d\n", max());
//	return 0;
//}
//int A, B, C;
//int max()
//{
//	int m = A > B ? A : B;
//	if (m < C)
//		m = C;
//	return m;
//}

//#include<stdio.h>
//int main()
//{
//	extern enter_string(char str[]);
//	extern delete_string(char str[], char ch);
//	extern print_string(char str[]);
//	char str[80], ch;
//	enter_string(str);
//	scanf("%c", &ch);
//	delete_string(str, ch);
//	print_string(str);
//	return 0;
//}
#include<stdio.h>
int main()
{
	size_t GetGcd(int m, int n);
	size_t GetLcm(int m, int n);
	size_t a, b,gcd,lcm;//gcd greatest common divied 最大公约数 lcd lastest common multiple
	printf("Please enter two positive integer:");
	scanf("%d%d", &a, &b);
	gcd = GetGcd(a, b);
	lcm = GetLcm(a, b);
	printf("%d 和 %d 的最大公约数：%d，最小公倍数是：%d\n",a,b, gcd, lcm);
	return 0;
}
size_t GetGcd(size_t m, size_t n)
{
	//用辗转相除法求最大公约数
	size_t r = m % n;
	while (r)
	{
		m = n;
		n = r;
		r = m % n;
	}
	return n;
}
size_t GetLcm(int m, int n)
{
	size_t gcd = GetGcd(m, n);
	return m * n / gcd;
}
