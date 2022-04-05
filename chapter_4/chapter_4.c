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

#include<stdio.h>
int main()
{
	int x;
	while (scanf("%d", &x) != EOF)
	{
		if (x >= 0)
			printf("%d\n", x);
		else
			printf("%d\n", -x);
	}
	return 0;
}