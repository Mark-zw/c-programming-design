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

//#include<stdio.h>
//struct Student
//{
//	int num;
//	char name[20];
//	char sex;
//	char address[20];
//};
//int main()
//{
//	struct Student s1 = { 19971001,"xianggang",'M',"China" };
//	printf("num      name      sex   address\n");
//	printf("%-9d%-10s%-6c%-7s\n", s1.num, s1.name, s1.sex, s1.address);
//	struct Student s2 = { .name = "Taiwan" };
//	printf("%-9d%-10s%-6c%-7s\n", s2.num, s2.name, s2.sex, s2.address);
//	s2 = s1;
//	printf("%-9d%-10s%-6c%-7s\n", s2.num, s2.name, s2.sex, s2.address);
//
//	return 0;
//}

//#include<stdio.h>
//typedef struct
//{
//	int num;
//	char name[20];
//	float score;
//}Student;
//int main()
//{
//	Student s1, s2;
//	scanf("%d%s%f", &s1.num, s1.name, &s1.score);
//	scanf("%d%s%f", &s2.num, s2.name, &s2.score);
//	printf("The higher score is: \n");
//	if (s1.score > s2.score)
//		printf("%-10d%-20s%-10f\n", s1.num, s1.name, s1.score);
//	else if(s1.score < s2.score)
//		printf("%-10d%-20s%-10f\n", s2.num, s2.name, s2.score);
//	else
//	{
//		printf("%-10d%-20s%-10f\n", s1.num, s1.name, s1.score);
//		printf("%-10d%-20s%-10f\n", s2.num, s2.name, s2.score);
//	}
//	return 0;
//}

//#include<stdio.h>
//struct Person
//{
//	char name[20];
//	int count;
//}leader[3] = { "li",0,"zhang",0,"sun",0 };
//int main()
//{
//	int i, j;
//	char leader_name[20];
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%s", leader_name);
//		for (j = 0; j < 3; j++)
//			if (strcmp(leader_name, leader[j].name) == 0)
//				leader[j].count++;
//	}
//	printf("\nResult:\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%5s:%d\n", leader[i].name, leader[i].count);
//	}
//	return 0;
//}