#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	//void sort(char* name[], int n);
//	//void print(char* name[], int n);
//	char* name[] = { "Follow me","BASIC","Great Wall","FORTRAN","Computer design" };
//	//int n = 5;
//	//sort(name, n);
//	//print(name, n);
//	char** p;
//	p = name;
//	int i = 0;
//	while (i < 5)
//	{
//		/*puts(p[i]);
//		puts('\n');*/
//		printf("%s\n", p[i]);
//		Sleep(500);
//		i++;
//	}
//	return 0;
//}
//void sort(char* name[], int n)
//{
//	char* temp;
//	int i, j, k;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//			if (strcmp(name[k], name[j]) > 0)
//				k = j;
//		if (k != i)
//		{
//			temp = name[i];
//			name[i] = name[k];
//			name[k] = temp;
//		}
//	}
//}
//void print(char* name[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%s\n", name[i]);
//}

//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int arr[5] = { 1,3,5,7,9 };
//	int* num[5] = { arr,arr + 1,arr + 2,arr + 3,arr + 4 };
//	int** p = num;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%2d\r", **(p + i));
//		Sleep(1000);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n, out = 0, i = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        int temp = 1;
//        if (n % 2 == 0)
//            temp = 0;
//        out += temp * pow(10, i++);
//        n /= 10;
//    }
//    printf("%d", out);
//    return 0;
//}

//#include<stdio.h>
//int main(int argc,char* argv[])
//{
//	while (argc > 1)
//	{
//		printf("%s\n", *argv);
//		++argv;
//		--argc;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	*p1 = 2;
//	printf("%d", *p1);
//	return 0;
//}

///* malloc example: random string generator*/
//#include <stdio.h>      /* printf, scanf, NULL */
//#include <stdlib.h>     /* malloc, free, rand */

//int main()
//{
//    int i, n;
//    char* buffer;
//    printf("How long do you want the string?\n");
//    scanf("%d", &i);
//    buffer = (char*)malloc(i + 1);
//    if (buffer == NULL) exit(1);
//    for (n = 0; n < i; n++)
//        buffer[n] = rand() % 26 + 'a';
//    buffer[i] = '\0';
//    printf("Random string: %s\n", buffer);
//    free(buffer);
//    return 0;
//}

//#include<stdio.h>
////#include<stdlib.h>
//int main()
//{
//	/*int* arr1 = (int*)malloc(10 * sizeof(int));
//	int* arr2 = (int*)calloc(10, sizeof(int));
//	int* arr3 = (int*)realloc(arr2, 2000 * sizeof(int));
//	free(arr1);
//	free(arr3);*/
//	int a = 2;
//	void* p = &a;
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//void Check(int* score,int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (score[i] < 60)
//			printf("%3d", score[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int* score = (int*)malloc(5 * sizeof(int));
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", score + i);
//	}
//	Check(score,5);
//	return 0;
//}

//�κ�ϰ��

//1.

//#include<stdio.h>
//#include <stdlib.h>
//#ifndef _COLOR_H_
//#define _COLOR_H_
//
//#define NONE                  "\e[0m"           //�����ɫ����֮��Ĵ�ӡΪ���������֮ǰ�Ĳ���Ӱ��
//#define BLACK                 "\e[0;30m"         //���
//#define L_BLACK             "\e[1;30m"            //���ڣ�ƫ�Һ�
//#define RED                     "\e[0;31m"      //��죬����
//#define L_RED                 "\e[1;31m"        //�ʺ�
//#define GREEN                "\e[0;32m"         //���̣�����
//#define L_GREEN            "\e[1;32m"           //����
//#define BROWN               "\e[0;33m"          //��ƣ�����
//#define YELLOW              "\e[1;33m"          //�ʻ�
//#define BLUE                    "\e[0;34m"      //����������
//#define L_BLUE                "\e[1;34m"        //������ƫ�׻�
//#define PURPLE               "\e[0;35m"         //��ۣ����ۣ�ƫ����
//#define L_PURPLE           "\e[1;35m"           //���ۣ�ƫ�׻�
//#define CYAN                   "\e[0;36m"       //����ɫ
//#define L_CYAN               "\e[1;36m"         //������ɫ
//#define GRAY                   "\e[0;37m"       //��ɫ
//#define WHITE                  "\e[1;37m"       //��ɫ�������һ�㣬�������󣬱�boldС
//#define BOLD                    "\e[1m"         //��ɫ������
//#define UNDERLINE         "\e[4m"               //�»��ߣ���ɫ��������С
//#define BLINK                   "\e[5m"         //��˸����ɫ��������С
//#define REVERSE            "\e[7m"              //��ת�������屳��Ϊ��ɫ������Ϊ��ɫ
//#define HIDE                     "\e[8m"        //����
//#define CLEAR                  "\e[2J"          //���
//#define CLRLINE               "\r\e[K"          //�����
//
//#endif
//
//int main()
//{
//	printf("\e[0;36m""This is a test");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("\033[32;5m �ַ�����ҫ\033[0m\r\n");
//    printf("\033[5m �ַ�����ҫ\033[0m\n");
//    printf("\033[4m �»���\033[0m\n");
//    printf("\033[1;33m printf��һ�����淨. \033[0m \n");  //
//
//    printf("\033[1;33m ������ɫ:\n");
//    printf("\033[0m none:\n");
//    printf("\033[0;30m back:\n");
//    printf("\033[1;30m dark_back:\n");
//    printf("\033[0;34m blue:\n");
//    printf("\033[1;34m light_blue:\n");
//    printf("\033[0;32m green:\n");
//    printf("\033[1;32m light_green:\n");
//    printf("\033[0;36m cyan:\n");
//    printf("\033[1;36m light_scan:\n");
//    printf("\033[0;31m red:\n");
//    printf("\033[1;31m light_read:\n");
//    printf("\033[0;35m purple:\n");
//    printf("\033[1;35m light_purple:\n");
//    printf("\033[0;33m yellow:\n");
//    printf("\033[1;33m light_yellow:\n");
//    printf("\033[0;37m white:\n");
//    printf("\033[1;37m light_white:\n");
//
//    printf("\033[1;33m ������ɫ:\n");
//    printf("\033[0m none:\033[0m\n");
//    printf("\033[0;40m back:\033[0m\n");
//    printf("\033[0;44m blue:\033[0m\n");
//    printf("\033[0;42m green:\033[0m\n");
//    printf("\033[0;46m cyan:\033[0m\n");
//    printf("\033[0;41m red:\033[0m\n");
//    printf("\033[0;45m purple:\033[0m\n");
//    printf("\033[0;43m brown:\033[0m\n");
//    printf("\033[0;47m light_yellow:\033[0m\n");
//
//    printf("\033[1;33m ����������ɫ:\033[0m\n");
//    printf("\033[47;31mhello world\033[?25l");
//    //47���ֱ�����ɫ, 31���������ɫ, hello world���ַ���. �����\033[?25l�ǿ����룺�������ع��.
//    printf("\033[0m");
//    return 0;
//}


