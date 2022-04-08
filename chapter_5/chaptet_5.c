#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define N 4
//int main()
//{
//	float score1[N], score2[N], score3[N], score4[N], score5[N],avg[N];
//	int i = 0;
//	while (i < N)
//	{
//		scanf("%f%f%f%f%f", &score1[i], &score2[i], &score3[i], &score4[i], &score5[i]);
//		avg[i] = (score1[i] + score2[i] + score3[i] + score4[i] + score5[i]) / 5;
//		i++;
//	}
//	for (i = 0; i < N; ++i)
//		printf("%7.2f  ", avg[i]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float s1, s2, s3, s4, s5;
//	int i = 1;
//	while (i <= 50)
//	{
//		scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
//		float avg = (s1 + s2 + s3 + s4 + s5) / 5;
//		printf("avg = %f\n", avg);
//		++i;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1, sum = 0;
//	while (i <= 100)
//	{
//		sum += i;
//		i++;
//	}
//	printf("sum is %d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%3d ", i);
//		if (i % 10 == 0)
//			printf("\n");
//		i++;
//	} while (i <= 100);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1, sum = 0;
//	do
//	{
//		sum += i;
//		i++;
//	} while (i <= 100);
//	printf("sum is %d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; ++i)
//		sum += i;
//	printf("sum is %d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 100; i >= 1; --i)
//		sum += i;
//	printf("sum is %d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char c;
//	for (; (c = getchar()) != '\n';)
//		printf("%c", c);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int sum = 0, num, i;
//	for (int i = 1; i <= 1000; i++)
//	{
//		scanf("%d", &num);
//		sum += num;
//		if (sum >= 100000)
//			break;
//	}
//	printf("We have %d pepole involves donating!\n", i);
//}
//#include<stdio.h>
//#define SUM 100000
//int main()
//{
//	float amount, aver, total = 0;
//	int i;
//	for (i = 1; i <= 1000; i++)
//	{
//		printf("please enter amount:");
//		scanf("%f", &amount);
//		total += amount;
//		if (total >= SUM)
//			break;
//	}
//	aver = total / i;
//	printf("total = %f,aver = %f\n", total, aver);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 4; i++)
//	{
//		for (int j = 1; j <= 5; j++)
//		{
//			if (i == 3 && j == 1)
//				//break;
//				continue;
//			printf("%4d", i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double sum = 0;
//	int i = 1, flag = 1;
//	while (1)
//	{
//		if (1.0 / i < pow(10, -6))
//			break;
//		sum += (1.0 / i) * flag;
//		flag *= -1;
//		i += 2;
//	}
//	printf("Pi/4 is %f\n", sum);
//	return 0;
//}

////斐波那契数列
//#include<stdio.h>
//int main()
//{
//	int f1 = 1, f2 = 1,f3;
//	int n;
//	scanf("%d", &n);
//	printf("%d %d ", f1, f2);
//	for (int i = 2; i <= n; i++)
//	{
//		f3 = f1 + f2;
//		printf("%d ", f3);
//		f1 = f2;
//		f2 = f3;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int f1 = 1, f2 = 1;
//	int i;
//	for (i = 2; i <= 20; i++)
//	{
//		printf("%12d %12d ", f1, f2);
//		if (i % 2 == 0)
//			printf("\n");
//		f1 = f1 + f2;
//		f2 = f2 + f1;
//		//printf("\n");
//	}
//	return 0;
//}

////判定素数
//#include<stdio.h>
//#include<math.h>
//int IsPrime1(size_t n)
//{
//	int i;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			break;
//	}
//	if (i < sqrt(n))
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	size_t n;
//	scanf("%d", &n);
//	int ret = IsPrime1(n);
//	if (ret)
//		printf("%d is a prime.", n);
//	else
//		printf("%d isn't a prime.", n);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int IsPrime(int n)
//{
//	int k = sqrt(n),i;
//	for (i = 2; i <= k; i++)
//	{
//		if (n % i == 0)
//			break;
//	}
//	if (i <= k)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int n1 = 100, n2 = 200, i;
//	for (i = n1; i <= n2; i++)
//	{
//		if (IsPrime(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n, i;
//	for (n = 101; n <= 200; n += 2)
//	{
//		for (i = 2; i < sqrt(n); i++)
//		{
//			if (n % i == 0)
//				break;
//		}
//		if (i > sqrt(n))
//			printf("%d ", n);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char c;
//	while ((c = getchar()) != "\n")
//	{
//		if ((c >= 'A' && c <= "Z") || (c >= 'a' && c <= 'z'))
//		{
//			c += 4;
//			if (c > 'Z' && c < 'Z' + 4 || c > 'z')
//				c -= 26;
//		}
//		putchar(c);
//	}
//	return 0;
//}

////3.求最大公约数和最小公倍数
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	printf("请输入两个正整数：");
//	scanf("%d%d", &m, &n);
//	int r = m % n;
//	//辗转相除法
//	int tem = m, ten = n;
//	while (r)
//	{
//		tem = ten;
//		ten = r;
//		r = tem % ten;
//	}
//	printf("最大公约数为：%d\n", ten);
//	int s;//用于求最小公倍数
//	//利用最大公约数
//	s = m * n / ten;
//	printf("最小公倍数为：%d\n", s);
//	return 0;
//}

////4.统计字符个数
//#include<stdio.h>
//int main()
//{
//	int character, space, number, other;
//	character = space = number = other = 0;
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			character++;
//		else if (ch == ' ')
//			space++;
//		else if (ch >= '0' && ch <= '9')
//			number++;
//		else
//			other++;
//	}
//	printf("character:%d\nspace:%d\nnumber:%d\nother:%d\n", character, space, number, other);
//	return 0;
//}