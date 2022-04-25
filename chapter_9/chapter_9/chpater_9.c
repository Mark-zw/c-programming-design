#define _CRT_SECURE_NO_WARNINGS 1
////test.c文件，用于测试
//#include<stdio.h>
//#include<sys/types.h>
//#include<unistd.h>
//int main()
//{
//    int i;
//    while (1)
//    {
//        pintf("PID: %d  ", geipid());
//        printf("PPID: %d\n", getppid());
//        sleep(1);
//    }
//    return 0;
//}
//#include<stdio.h>
//union f
//{
//	int i;
//	char ch;
//};
//typedef struct Student
//{
//	char name[20];
//	char sex[10];
//	char telephone[12];
//	char address[20];
//	int num;
//	int age;
//}Student;
//int main()
//{
//	//union f f1;
//	//f1.i = 1;
//	//int ret = f1.ch;
//	//if (ret == 1)
//	//	printf("小端字节序\n");
//	//else
//	//	printf("大端字节序\n");
//	printf("%d\n", sizeof(Student));
//	return 0;
//}
//
//#include<stdio.h>
//struct Date
//{
//	int month;
//	int day;
//	int year;
//};
//struct Student
//{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//	struct Date birthday;
//	char addr[30];
//};
//int main()
//{
//	printf("%d\n", sizeof(struct Student));
//	return 0;
//}