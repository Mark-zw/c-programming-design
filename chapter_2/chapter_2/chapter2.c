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

////�ж�����
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
////����һ�������Ķ��壬ֻ�ܱ�1���Լ�����
////����������true�����򷵻�false
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
////���������Է���һ���Ż����ж�������ʱ�����жϵ��������λ�ã�ֻ��Ҫ�жϵ��������ŵ�λ��
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
////������������һ����־λ����ǰ�˳�ѭ�������������ж�
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
//	//1---��  0---����
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

////2.��������10������Ҫ���������������
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

////3.��3����a��b��c��Ҫ�󰴴�С˳����������
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
//	printf("%d,%d,%d\n", a, b, c);//���հ���a,b,c˳�������Ҫ��a >= b >= c
//	return 0;
//}

////4.��1+2+3+...+100
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

////5.�ж�һ����n�ܷ�ͬʱ��3��5����
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

//6.��100~200֮����������
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

////7.��������m��n�����Լ��
//#include<stdio.h>
//int func(int m, int n)//�����Լ��
//{
//	int rem = m % n;//rem��ʾ(m,n)֮�������
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

////8.�󷽳�ax^2+bx+c=0�ĸ�
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