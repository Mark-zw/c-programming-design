#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1, mul = 1;
//	while (i <= 5)
//	{
//		mul *= i++;
//	}
//	printf("%d\n", mul);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int year;
//	printf("Please input an integer between 2000 and 2500:\n");
//	scanf("%d", &year);
//	if (year >= 2000 && year <= 2500)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			printf("%d is leap year!\n", year);
//		else
//			printf("%d isn't leap year!\n", year);
//	}
//	else
//		printf("Damn! wrong integer!\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double i = 1;
//	double sum = 0;
//	int sign = 1;
//	while (i <= 10)
//	{
//		sum += (1 / i) * sign;
//		sign *= -1;
//		i++;
//	}
//	printf("sum is %f\n", sum);
//	i = 1;
//	sum = 0;
//	while (i <= 100)
//	{
//		sum += (1 / i) * sign;
//		sign *= -1;
//		i++;
//	}
//	printf("sum is %f\n", sum);
//	i = 1;
//	sum = 0;
//	while (i <= 1000)
//	{
//		sum += (1 / i) * sign;
//		sign *= -1;
//		i++;
//	}
//	printf("sum is %f\n", sum);
//	i = 1;
//	sum = 0;
//	while (i <= 10000)
//	{
//		sum += (1 / i) * sign;
//		sign *= -1;
//		i++;
//	}
//	printf("sum is %f\n", sum);
//	i = 1;
//	sum = 0;
//	while (i <= 100000)
//	{
//		sum += (1 / i) * sign;
//		sign *= -1;
//		i++;
//	}
//	printf("sum is %f\n", sum);
//	return 0;
//}

////判断素数
//#include<stdio.h>
//#include<stdbool.h>
//#include<math.h>
//int main()
//{
//	bool IsPrime1(int x);
//	bool IsPrime2(int x);
//	bool IsPrime3(int x);
//	bool ret1 = IsPrime1(5);
//	bool ret2 = IsPrime2(6);
//	bool ret3 = IsPrime3(7);
//	//printf("ret1 = %d,ret2 = %d,ret3 = %d\n", ret1, ret2, ret3);
//	if (ret1)
//		printf("ret1 is true.  5 is prime\n");
//	else
//		printf("ret1 is false.  5 isn't prime\n");
//	if (ret2)
//		printf("ret2 is true.  6 is prime\n");
//	else
//		printf("ret2 is false.  6 isn't prime\n");
//	if (ret3)
//		printf("ret3 is true.  7 is primen\n");
//		else
//		printf("ret3 is false.  7 isn't prime\n");
//	return 0;
//}
////方法一：素数的定义，只能被1和自己整除
////是素数返回true，否则返回false
//bool IsPrime1(size_t x)
//{
//	size_t i;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			break;
//	}
//	if (i < x)
//		return false;
//	else
//	    return true;
//}
////方法二：对方法一的优化，判断素数的时候不用判断到自身这个位置，只需要判断到自身开根号的位置
//bool IsPrime2(int x)
//{
//	size_t i;
//	for (i = 2; i < sqrt(x); i++)
//	{
//		if (x % i == 0)
//			break;
//	}
//	if (i <= sqrt(x))
//		return false;
//	else
//		return true;
//}
////方法三：设置一个标志位，提前退出循环，加速素数判断
//bool IsPrime3(size_t x)
//{
//	int flag = 1;
//	for (size_t i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 0)
//		return false;
//	else
//		return true;
//}

//#include<stdio.h>
//int main()
//{
//	//1---醋  0---酱油
//	int a = 1;
//	int b = 0;
//	void Swap(int x, int y);
//	printf("Before Swap:\n");
//	printf("a = %d,b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("After Swap:\n");
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}
//void Swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}

