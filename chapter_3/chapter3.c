#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;\n");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    float sick, death;
//    float rate;
//    scanf("%d%d", &sick, &death);
//    rate = (death / sick) * 100;
//    printf("%.3f%%", rate);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("\"Genius is 1%% inspiration and 99%% perspiration.\"");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("Welcome to ACM / ICPC!");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float f, c;
//	scanf("%f", &f);
//	c = (5.0 / 9.0) * (f - 32);
//	printf("%.1f\n", c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float p0 = 1000, r1 = 0.0036, r2 = 0.0225, r3 = 0.0198, p1, p2, p3;
//	p1 = p0 * (1 + r1);
//	p2 = p0 * (1 + r2);
//	p3 = p0 * (1 + r3 / 2) * (1 + r3 / 2);
//	printf("p1 = %f\np2 = %f\np3 = %f\n", p1, p2, p3);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//printf("'");
//	//printf("-----------------------------\n");
//	//printf("\'");
//	//printf("?\n");
//	//printf("-----------------------------\n");
//	//printf("\?\n");
//	unsigned char c = 128;
//	int a = -1;
//	float f = 1.23345f;
//	printf("%u\a\n",a);
//	printf("%c\a\n", c);
//	printf("%f\a\n", f);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = + 1, b = - 2, c = 3;
//	printf("(%d) + (%d) = %d\n", a, b, a + b);
//	printf("(%d) * (%d) = %d\n", a, b, a * b);
//	printf("(%d) / (%d) = %d\n", a, b, a / b);
//	printf("(%d) / (%d) = %d\n", b, a, b / a);
//	a = 3, b = 4;
//	printf("%d %% %d = %d\n", a, b, a % b);
//	printf(" ++a = %d\n", ++a);
//	printf(" ++b = %d\n", ++b);
//	printf(" a++ = %d\n", a++);
//	printf(" b++ = %d\n", b++);
//	printf(" a = %d\n", a);
//	printf(" b = %d\n", b);
//	return 0;
//}
//
////给定大小字母，将其转换为小写字母输出
//#include<stdio.h>
//int main()
//{
//	char ch1, ch2;
//	char blank;
//	while (scanf("%c", &ch1) != EOF)
//	{
//		getchar();
//		ch2 = ch1 + 32;
//		//putchar(ch1);
//		//putchar('-');
//		//putchar('>');
//		//putchar(ch2);
//		//putchar('\n');
//		printf("%c->%c\n", ch1, ch2);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1, b = 2, c;
//	c = a + b;
//	int d = 1 + c;
//	printf("%d\n", d);
//	return 0;
//}

////给出三角形的三边长，求三角形的面积
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c, p,area;
//	scanf("%f%f%f", &a, &b, &c);
//	if ((a + b) > c && (a + c) > b && (b + c) > a)
//	{
//		p = (a + b + c) / 2;
//		area = sqrt(p * (p - a) * (p - b) * (p - c));
//		printf("a = %f\tb = %f\tc = %f\n", a, b, c);
//		printf("area is %f\n", area);
//	}
//	else
//		printf("can not be a triangle!\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	printf("i = %d\n", i);
//	printf("i = %5d\n", i);
//	printf("%e\n", 123.456);
//	int a = -1;
//	printf("a = %d\na = %o\na = %x\n", a, a,a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	putchar('B');
//	putchar('O');
//	putchar('Y');
//	putchar('\n');
//	int i = 1;
//	while (i++ < 20)
//		putchar('-');
//	putchar('\n');
//	int a = 66, b = 79, c = 89;
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	a = getchar();
//	b = getchar();
//	c = getchar();
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	printf("%c\n", getchar());
//	printf("%c\n", getchar());
//	printf("%c\n", getchar());
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch1, ch2;
//	ch1 = getchar();
//	ch2 = ch1 + 32;
//	putchar(ch2);
//	return 0;
//}

////课后习题
////1.
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	float p = 1;
//	while (i++ <= 50)
//	{
//		p *= 1.07;
//	}
//	printf("%f%%\n", p * 100);
//}

////2.
//#include<stdio.h>
//int main()
//{
//	double m = 1000;
//	double p0,p1, p2, p3, p5;
//	double r0 = 0.0035,r1 = 0.015, r2 = 0.021, r3 = 0.0275, r5 = 0.03;
//	p5 = m * (1 + r5);
//	p2 = m * (1 + 2 * r2)*(1 + 3 * r3);
//	p3 = m * (1 + 3 * r3)*(1 + 2 * r2);
//	p1 = m * (1 + r2) * (1 + r2) * (1 + r2) * (1 + r2) * (1 + r2);
//	for (int i = 1; i <= 5; i++)
//		p0 = m * (1 + r0) * (1 + r0) * (1 + r0) * (1 + r0);
//	printf("p0 = %f\np1 = %f\np2 = %f\np3 = %f\np5 = %f\n", p0, p1, p2, p3, p5);
//	return 0;
//}

////3.
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double d = 300000, p = 6000, r = 0.01;
//	double m;
//	m = log(p / (p - d * r)) / log(1 + r);
//	printf("%lf\n", m);
//	return 0;
//}

////4.
//#include<stdio.h>
//int main()
//{
//	int c1, c2;
//	//c1 = 97;
//	//c2 = 98;
//	c1 = 197;
//	c2 = 198;
//	printf("c1 = %3c,c2 = %3c\n", c1, c2);
//	printf("c1 = %3d,c2 = %3d\n", c1, c2);
//	return 0;
//}

////5.
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	float x, y;
//	char c1, c2;
//	scanf("a=%db=%d", &a, &b);
//	scanf("%f%e",&x,&y);
//	scanf("%c%c", &c1, &c2);
//	printf("a = %d,b = %d\n", a, b);
//	printf("x = %f,y = %f\n", x, y);
//	printf("c1 = %c,c2 = %c\n", c1, c2);
//	return 0;
//}

