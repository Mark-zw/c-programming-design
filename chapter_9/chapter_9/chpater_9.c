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

//#include<stdio.h>
//typedef struct Student
//{
//	int num;
//	char name[20];
//	float score;
//}Student;
//int main()
//{
//	Student stu[5] = { {10101,"zhang",78},{10102,"li",77},
//		{10103,"sun",98},{10104,"wang",91},{10105,"qian",73} };
//	Student temp;
//	int i, j;
//	for(i = 0; i < 4;i++)
//		for (j = 0; j < 4 - i ; j++)
//		{
//			if (stu[j].score > stu[j + 1].score)
//			{
//				temp = stu[j];
//				stu[j] = stu[j + 1];
//				stu[j + 1] = temp;
//			}
//		}
//	printf("num     name      float\n");
//	for (i = 0; i < 5; i++)
//		printf("%-8d%-10s%-5.0f\n", stu[i].num, stu[i].name, stu[i].score);
//	return 0;
//}
//
//#include<stdio.h>
//struct Student
//{
//	int No;
//	char name[20];
//	char sex;
//	float score;
//};
//int main()
//{
//	struct Student s1;
//	struct Student* p = &s1;
//	scanf("%d%s %c%f", &p->No, p->name, &p->sex, &p->score);
//	//scanf("%d%s%c%lf", &s1.No, s1.name, &s1.sex, &s1.score);
//	printf("No.:%d\n", s1.No);
//	printf("Name:%s\n", s1.name);
//	printf("Sex:%c\n", s1.sex);
//	printf("Score:%.2f\n", s1.score);
//	printf("No.:%d  Name:%s  Sex:%c  Score:%.2f \n", p->No, p->name, p->sex, p->score);
//	return 0;
//}

//#include<stdio.h>
//struct Student
//{
//	int num;
//	int age;
//	char name[10];
//	char sex;
//};
//int main()
//{
//	struct Student stu[3] = { {10101,19,"Li Ling",'M'},
//		{10102,20,"Wang Fang",'F'},{10103,22,"Zhang San",'M'} };
//	struct Student* p = stu;
//	int i;
//	printf("No     Age  Name      Sex\n");
//	for (i = 0; i < 3; i++)
//	{
//		//printf("%7d%5d%10s%3c\n", p[i].num, p[i].age, p[i].name, p[i].sex);
//		printf("%-7d%-5d%-10s%-3c\n", (p + i)->num, (p + i)->age, (p + i)->name, (p + i)->sex);
//	}
//	printf("sizeof(struct Student) is %d\n", sizeof(struct Student));
//	return 0;
//}

//#include<stdio.h>
//struct Student
//{
//	int num;
//	char name[10];
//	float math;
//	float english;
//	float computer;
//};
//void fun(struct Student* stu)
//{
//	float avg[3];
//	int i;
//	for (i = 0; i < 3; i++)
//		avg[i] = (stu[i].math + stu[i].english + stu[i].computer) / 3;
//	int max = 0;
//	for (i = 1; i < 3; i++)
//		if (avg[i] > avg[max])
//			max = i;
//	printf("num   name       math       english    computer   \n");
//	printf("%-6d%-  10s %-10.2f %-10.2f %-10.2f\n", stu[max].num, stu[max].name,
//		stu[max].math, stu[max].english, stu[max].computer);
//}
//int main()
//{
//	struct Student stu[3] = { {1,"zhang san",98.0,99.0,100},
//		{2,"Wang Fang",90,100,99},{3,"Li Si",100,91,100} };
//	fun(stu);
//	return 0;
//}