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

////2.依次输入10个数，要求输出其中最大的数
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int max;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i == 0)
//			max = arr[i];
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max is %d\n", max);
//	return 0;
//}

////3.有3个数a，b，c，要求按大小顺序把它们输出
//#include<stdio.h>
//void Swap(int* x, int* y)
//{
//	int temp  = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//		Swap(&a, &b);
//	if (a < c)
//		Swap(&a, &c);
//	if (b < c)
//		Swap(&b, &c);
//	printf("%d,%d,%d\n", a, b, c);//最终按照a,b,c顺序输出，要求a >= b >= c
//	return 0;
//}

////4.求1+2+3+...+100
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; ++i)
//	{
//		sum += i;
//	}
//	printf("sum is %d.\n", sum);
//	return 0;
//}

////5.判断一个数n能否同时被3和5整除
//#include<stdio.h>
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	if (num % 3 == 0 && num % 5 == 0)
//		printf("%d can be divided by 3 and 5.\n", num);
//	else
//		printf("%d can not be divided by 3 and 5.\n", num);
//	return 0;
//}

//6.将100~200之间的素数输出
//#include<stdio.h>
//#include<stdbool.h>
//#include<math.h>
//bool IsPrime(size_t x)
//{
//	int flag = 1;
//	for (int i = 2; i < sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int i = 100;
//	while (i <= 200)
//	{
//		if (IsPrime(i))
//			printf("%d ", i);
//		i++;
//	}
//	printf("\n--------------------------\n");
//	return 0;
//}

////7.求两个数m和n的最大公约数
//#include<stdio.h>
//int func(int m, int n)//求最大公约数
//{
//	int rem = m % n;//rem表示(m,n)之间的余数
//	while (rem > 0)
//	{
//		m = n;
//		n = rem;
//		rem = m % n;
//	}
//	return n;
//}
//int main()
//{
//	int a, b;
//	int ret;
//	scanf("%d%d", &a, &b);
//	ret = func(a, b);
//	printf("%d and %d greatest common divider is %d.\n", a, b, ret);
//	return 0;
//}

////8.求方程ax^2+bx+c=0的根
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c;
//	float delta,root1,root2;
//	scanf("%f%f%f", &a, &b, &c);
//	delta = b * b - 4 * a * c;
//	if (delta > 0)
//	{
//		root1 = (-b + sqrt(delta)) / (2 * a);
//		root2 = (-b - sqrt(delta)) / (2 * a);
//		printf("%f x^2+%f x+%f=0 have two roots are %f and %f.\n", a, b, c, root1,root2);
//	}
//	else if (delta == 0)
//	{
//		root1 = root2 = (-b ) / (2 * a);
//		printf("%fx^2+%fx+%f=0 have a root is %f.\n",a,b,c,root1);
//	}
//	else
//		printf("%fx^2+%fx+%f=0 haven't any root.\n",a,b,c);
//	return 0;
//}