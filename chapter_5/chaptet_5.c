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