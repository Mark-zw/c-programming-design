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

//#include<stdio.h>
//void Swap(double* x, double* y)
//{
//	double temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	double a, b, c;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	if (a > b)
//		Swap(&a, &b);
//	if (a > c)
//		Swap(&a, &c);
//	if (b > c)
//		Swap(&b, &c);
//	printf("%lf,%lf,%lf\n", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	//int max = (a > b) ? a : b;
//	//int max;
//	////max = (a > b) ? a : b;
//	//(a > b) ? (max = a) : (max = b);
//	//printf("%d\n", max);
//	(a > b) ? printf("%d", a) : printf("%d", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	//if (ch >= 'A' && ch <= 'Z')
//	//	ch += 32;
//	//ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
//	(ch >= 'A' && ch <= 'Z') ? (ch += 32) : ch;
//	printf("%c", ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char grade;
//	scanf("%c", &grade);
//	switch (grade)
//	{
//	case 'A':
//		printf("85~100\n");
//		break;
//	case 'B':
//		printf("70~84\n");
//		break;
//	case 'C':
//		printf("60~69\n");
//		break;
//	case 'D':
//		printf("< 60\n");
//		break;
//	default:
//		printf("enter data error\n");
//		break;
//	}
//	return 0;
//}

////简易计算器
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	char ch = 0;
//	printf("Please enter two integer you want to calculate:\n");
//	scanf("%d%d", &a, &b);
//	printf("Please choose the type of calculating from  + - * /:\n");
//	getchar();
//	scanf("%c", &ch);
//	switch (ch)
//	{
//	case '+':
//		printf("%d + %d = %d\n", a, b, a + b);
//		break;
//	case '-':
//		printf("%d - %d = %d\n", a, b, a - b);
//		break;
//	case '*':
//		printf("%d * %d = %d\n", a, b, a * b);
//		break;
//	case '/':
//		printf("%d / %d = %d\n", a, b, a / b);
//		break;
//	default:
//		printf("enter data error!\n");
//		break;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int c, s;
//	double p, w, d, f;
//	printf("please enter price and weight:\n");
//	scanf("%lf%lf", &p, &w);
//	printf("please enter distant:\n");
//	scanf("%d", &s);
//	if (s >= 3000)
//		c = 12;
//	else
//		c = s / 250;
//	switch (c)
//	{
//	case 0:
//		d = 0;
//		break;
//	case 1:
//		d = 2;
//		break;
//	case 2:
//	case 3:
//		d = 5;
//		break;
//	case 4:
//	case 5:
//	case 7:
//		d = 8;
//		break;
//	case 8:
//	case 9:
//	case 10:
//	case 11:
//		d = 10;
//		break;
//	case 12:
//		d = 15;
//		break;
//	}
//	f = p * w * s * (1 - d / 100);
//	printf("freight is %lf\n", f);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    //n = n << 1;
//    printf("%d", n << 1);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int num;
//    float max, min, avg, sum = 0;
//    float arr[5];
//    scanf("%d", &num);
//    scanf("%f%f%f%f%f", arr, arr + 1, arr + 2, arr + 3, arr + 4);
//    int i = 0;
//    while (i < 5)
//    {
//        if (i == 0)
//        {
//            max = arr[i];
//            min = arr[i];
//        }
//        if (max < arr[i])
//            max = arr[i];
//        if (min > arr[i])
//            min = arr[i];
//        sum += arr[i];
//        i++;
//    }
//    avg = sum / 5;
//    printf("%.2f %.2f %.2f\n", max, min, avg);
//    return 0;
//}

////4.
//
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int max = a;
//	if (max < b)
//		max = b;
//	if (max < c)
//		max = c;
//	printf("max is %d\n", max);
//	return 0;
//}

////5.
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n;
//	printf("Please enter an integer bigger than 0 and smaller than 1000: ");
//	scanf("%d", &n);
//	if (n > 0 && n < 1000)
//		printf("%d\n", (int)sqrt(n));
//	else
//		printf("error number,please try again!\n");
//	return 0;
//}

////6.
//#include<stdio.h>
//int main()
//{
//	double x, y;
//	scanf("%lf", &x);
//	if (x < 1)
//		y = x;
//	else if (x >= 1 && x < 10)
//		y = 2 * x - 1;
//	else
//		y = 3 * x - 11;
//	printf("x = %lf,y = %lf\n", x, y);
//	return 0;
//}

////7.
//
////8.
//#include<stdio.h>
//int main()
//{
//	size_t grade;
//	scanf("%d", &grade);
//	if (grade < 0 || grade > 100)
//		printf("error grade!\n");
//	else if (grade >= 90)
//		printf("A");
//	else if (grade >= 80)
//		printf("B");
//	else if (grade >= 70)
//		printf("C");
//	else if (grade >= 60)
//		printf("D");
//	else
//		printf("E");
//	return 0;
//}

////9.
//#include<stdio.h>
//int main()
//{
//	int count = 0;//统计位数
//	size_t n;
//	scanf("%d", &n);
//	if (n > 99999)
//		printf("error number!\n");
//	else
//	{
//		int x1, x2, x3, x4, x5;//记录余数
//		x1 = n % 10;
//		x2 = (n % 100) / 10;
//		x3 = (n % 1000) / 100;
//		x4 = (n % 10000) / 1000;
//		x5 = n / 10000;
//		if (x1)
//			count++;
//		if (x2)
//			count++;
//		if (x3)
//			count++;
//		if (x4)
//			count++;
//		if (x5)
//			count++;
//		printf("count: %d\n", count);
//		printf("%d %d %d %d %d\n", x5, x4, x3, x2, x1);
//		printf("%d %d %d %d %d\n", x1, x2, x3, x4, x5);
//	}
//	return 0;
//}
