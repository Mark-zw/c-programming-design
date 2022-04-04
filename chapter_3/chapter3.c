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

#include<stdio.h>
int main()
{
	int a = + 1, b = - 2, c = 3;
	printf("(%d) + (%d) = %d\n", a, b, a + b);
	printf("(%d) * (%d) = %d\n", a, b, a * b);
	printf("(%d) / (%d) = %d\n", a, b, a / b);
	printf("(%d) / (%d) = %d\n", b, a, b / a);
	a = 3, b = 4;
	printf("%d %% %d = %d\n", a, b, a % b);
	printf(" ++a = %d\n", ++a);
	printf(" ++b = %d\n", ++b);
	printf(" a++ = %d\n", a++);
	printf(" b++ = %d\n", b++);
	printf(" a = %d\n", a);
	printf(" b = %d\n", b);

	return 0;
}