#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int year, month, day;
//    scanf("%4d%2d%2d", &year, &month, &day);
//    printf("year=%d\n", year);
//    printf("month=%02d\n", month);
//    printf("day=%02d\n", day);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%#o %#X", 1234,1234);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    printf("%d%8d%8d\n", a, b, c);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    float f;
//    scanf("%f", &f);
//    printf("%d", (int)f % 10);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int X, N, d;
//    scanf("%d%d", &X, &N);
//    d = ((N % 7) + X) % 7;
//    if (d == 0)
//        d = 7;
//    printf("%d", d);
//}

//#include<stdio.h>
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		if (x >= 0)
//			printf("%d\n", x);
//		else
//			printf("%d\n", -x);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double d1, d2;
//	scanf("%lf%lf", &d1, &d2);
//	if (d1 <= d2)
//		printf("%lf,%lf\n", d1, d2);
//	else
//		printf("%lf,%lf\n", d2, d1);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double d1, d2;
//	scanf("%lf%lf", &d1, &d2);
//	if (d1 > d2)
//	{
//		double temp = d1;
//		d1 = d2;
//		d2 = temp;
//	}
//	printf("%lf,%lf", d1, d2);
//	return 0;
//}

#include<stdio.h>
void Swap(double* x, double* y)
{
	double temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a > b)
		Swap(&a, &b);
	if (a > c)
		Swap(&a, &c);
	if (b > c)
		Swap(&b, &c);
	printf("%lf,%lf,%lf\n", a, b, c);
	return 0;
}