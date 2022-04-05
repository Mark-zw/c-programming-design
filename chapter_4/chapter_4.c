#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	return 0;
//}
#include<stdio.h>
int main()
{
    int year, month, day;
    scanf("%4d%2d%2d", &year, &month, &day);
    printf("year=%d\n", year);
    printf("month=%02d\n", month);
    printf("day=%02d\n", day);
    return 0;
}