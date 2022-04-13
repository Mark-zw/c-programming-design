#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void Print()
//{
//	printf("******************\n");
//	printf("  How do you do!\n");
//	printf("******************\n");
//}
//int main()
//{
//	Print();
//	return 0;
//}
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}

//#include<stdio.h>
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d",&a,&b);
//	printf("max is %d\n", Max(a, b));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int Sum(int, int);
//	int Sum(int x, int y);
//
//	int a, b, sum;
//	scanf("%d%d", &a, &b);
//	sum = Sum(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int Sum(int x, int y)
//{
//	return x + y;
//}

//#include<stdio.h>
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("max is %d\n", max(max(max(a, b), c), d));
//	return 0;
//}

//#include<stdio.h>
//int age(int n)
//{
//	if (n == 1)
//		return 10;
//	else
//		return age(n - 1) + 2;
//}
//int main()
//{
//	for (int i = 1; i <= 5; i++)
//	{
//		printf("%d ", age(i));
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int f(int n);
//	int x;
//	scanf("%d", &x);
//	printf("%d! = %d\n", x, f(x));
//	return 0;
//}
//int f(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return f(n - 1) * n;
//}

//#include<stdio.h>
//int main()
//{
//	void hanoi(int n, char one, char two, char three);
//	int m;
//	printf("input the number of diskes:");
//	scanf("%d", &m);
//	printf("The step to move %d diskes:\n", m);
//	hanoi(m, 'A', 'B', 'C');
//	return 0;
//}
//void hanoi(int n, char one, char two, char three)
//{
//	void move(char x, char y);
//	if (n == 1)
//		move(one, three);
//	else
//	{
//		hanoi(n - 1, one, three, two);
//		move(one, three);
//		hanoi(n - 1, two, one, three);
//	}
//}
//void move(char x, char y)
//{
//	printf("%c -> %c\n", x, y);
//}

//#include<stdio.h>
//int Max(int* arr, int* pindex,int size)
//{
//	int max = arr[0];
//	*pindex = 0;
//	for (int i = 1; i < size; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//			*pindex = i;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int arr[10] = { 19,2,3,18,7,6,4,9,81,1 };
//	int max, index;
//	max = Max(arr, &index, sizeof(arr) / sizeof(arr[0]));
//	printf("max is %d,index is %d\n", max, index);
//	return 0;
//}

//#include<stdio.h>
//float average(float* score, int n)
//{
//	float sum = score[0],avg;
//	for (int i = 1; i < n; i++)
//	{
//		sum += score[i];
//	}
//	avg = sum / n;
//	return avg;
//}
//int main()
//{
//	float score1[5] = { 98.5,97,91.5,60,55 };
//	float score2[10] = { 67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5 };
//	printf("The average of class A is %6.2f\n", average(score1, 5));
//	printf("The average of class B is %6.2f\n", average(score2, 10));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int arr[3][4] = { 12,11,23,42,2,4,5,7,97,102,23,41 };
//	int arr[][4] = { 12,11,23,42,2,4,5,7,97,102,23,41 };
//	int max = arr[0][0];
//	for(int i = 0;i<3;i++)
//		for (int j = 0; j < 4; j++)
//		{
//			if (arr[i][j] > max)
//				max = arr[i][j];
//		}
//	printf("max is %d\n", max);
//	return 0;
//}

//#include<stdio.h>
//float Min, Max;
//float GetAvg(float score[], int size)
//{
//	float sum = 0;
//	Min = Max = score[0];
//	for (int i = 0; i < size; ++i)
//	{
//		sum += score[i];
//		if (Min > score[i])
//			Min = score[i];
//		if (Max < score[i])
//			Max = score[i];
//	}
//	return sum / size;
//}
//int main()
//{
//	float score[10], avg;
//	printf("Please enter 10 number:");
//	for (int i = 0; i < 10; i++)
//		scanf("%f", score + i);
//	avg = GetAvg(score, sizeof(score) / sizeof(score[0]));
//	printf("avg = %.2f\nmax = %.2f\nmin = %.2f\n", avg, Max, Min);
//	return 0;
//}

//#include<stdio.h>
//int a = 3, b = 5;
//int main()
//{
//	int max(int a, int b);
//	int a = 8;
//	printf("max = %d\n", max(a, b));
//	return 0;
//}
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}

//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}
//#include<stdio.h>                                                                    
//int main()
//{
//	int max();
//	extern int A, B, C;
//	printf("Please enter three integer numbers:");
//	scanf("%d%d%d", &A, &B, &C);
//	printf("max is %d\n", max());
//	return 0;
//}
//int A, B, C;
//int max()
//{
//	int m = A > B ? A : B;
//	if (m < C)
//		m = C;
//	return m;
//}


//1.求最大公约数和最小公倍数
//#include<stdio.h>
//int main()
//{
//	extern enter_string(char str[]);
//	extern delete_string(char str[], char ch);
//	extern print_string(char str[]);
//	char str[80], ch;
//	enter_string(str);
//	scanf("%c", &ch);
//	delete_string(str, ch);
//	print_string(str);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	size_t GetGcd(int m, int n);
//	size_t GetLcm(int m, int n);
//	size_t a, b,gcd,lcm;//gcd greatest common divied 最大公约数 lcd lastest common multiple
//	printf("Please enter two positive integer:");
//	scanf("%d%d", &a, &b);
//	gcd = GetGcd(a, b);
//	lcm = GetLcm(a, b);
//	printf("%d 和 %d 的最大公约数：%d，最小公倍数是：%d\n",a,b, gcd, lcm);
//	return 0;
//}
//size_t GetGcd(size_t m, size_t n)
//{
//	//用辗转相除法求最大公约数
//	size_t r = m % n;
//	while (r)
//	{
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	return n;
//}
//size_t GetLcm(int m, int n)
//{
//	size_t gcd = GetGcd(m, n);
//	return m * n / gcd;
//}
//
////2.二次方程的解
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	void fun1(float x, float y, float z, float* p1, float* p2);
//	void fun2(float x, float y, float z, float* p1, float* p2);
//	void fun3();
//	float a, b, c, delta, x1, x2;
//	printf("Please enter three real number:");
//	scanf("%f%f%f", &a, &b, &c);
//	if (a == 0)
//	{
//		if (b != 0)
//			printf("Have one solution: %f\n", c / b);
//		else
//			printf("No solution!\n");
//	}
//	else
//	{
//		delta = b * b - 4 * a * c;
//		if (delta > 0)
//		{
//			fun1(a, b, c, &x1, &x2);
//			printf("Have two solutions: roo1 = %f,root2 = %f\n", x1, x2);
//		}
//		else if (delta == 0)
//		{
//			fun2(a, b, c, &x1, &x2);
//			printf("Have same solution: root1 = root2 = %f\n", x1);
//		}
//		else
//			fun3();
//	}
//	return 0;
//}
//
//void fun1(float x, float y, float z, float* p1, float* p2)
//{
//	float delta = y * y - 4 * x * z;
//	*p1 = (-y + sqrt(delta)) / (2 * x);
//	*p2 = (-y - sqrt(delta)) / (2 * x);
//}
//void fun2(float x, float y, float z, float* p1, float* p2)
//{
//	float delta = y * y - 4 * x * z;
//	*p1 = *p2 = (-y) / (2 * x);
//}
//void fun3()
//{
//	printf("No solution!\n");
//}

//#include<stdio.h>
//#include<math.h>
//int IsPrime(int n)
//{
//	int i;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			break;
//	}
//	if (i <= sqrt(n))
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int n,ret;
//	scanf("%d", &n);
//	ret = IsPrime(n);
//	if (ret == 1)
//		printf("%d is a prime\n", n);
//	else
//		printf("%d isn't a prime\n", n);
//	return 0;
//}

////4.行列式转置
//#include<stdio.h>
//void Matrix_reverse(int a[3][3])
//{
//	int b[3][3];
//	int i, j;
//	//1.转置行列式，关键点 b[i][j] = a[j][i] 转置后，行变成列，列变成行
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			b[i][j] = a[j][i];
//	//2.拷贝回原数组
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			a[i][j] = b[i][j];
//}
//void Matrix_print(int a[3][3])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%-3d", a[i][j]);
//		printf("\n");
//	}
//}
//int main()
//{
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	printf("Before reverse\n");
//	Matrix_print(a);
//	Matrix_reverse(a);
//	printf("----------------------------\n");
//	printf("After reverse\n");
//	Matrix_print(a);
//	return 0;
//}

//5.逆置字符串
//#include<stdio.h>
//void String_reverse(char* str)
//{
//	int len = strlen(str);//求出字符串的有效字符长度
//	int left = 0, right = len - 1;//left、right是左右下标
//	while (left < right)
//	{
//		//将left、right元素互换
//		char temp = str[left];
//		str[left++] = str[right];
//		str[right--] = temp;
//	}
//}
//int main()
//{
//	char str[100];
//	gets(str);
//	printf("Before reverse: ");
//	puts(str);
//	String_reverse(str);
//	printf(" After reverse: ");
//	puts(str);
//	return 0;
//}

////6.字符串连接
//#include<stdio.h>
//#include<string.h>
//void String_connect(char* str1, char* str2)
//{
//	//计算出两个字符串的有效长度
//	int len1 = strlen(str1), len2 = strlen(str2);
//	int begin1 = len1, begin2 = 0, end2 = len2;//begin1表示str1的开始，begin2、end2表示str2的开始和结束
//	while (begin2 <= end2)
//	{
//		str1[begin1++] = str2[begin2++];
//	}
//}
//int main()
//{
//	char str1[100], str2[30];
//	gets(str1);
//	gets(str2);
//	printf("Before connect,string is %s\n",str1);
//	String_connect(str1, str2);
//	printf(" After connect,string is %s\n", str1);
//	return 0;
//}

//7.复制元音字母