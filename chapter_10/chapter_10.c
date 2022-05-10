#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//1.open file
//	FILE* fp = fopen("test1.txt", "r");
//	if (fp == NULL)
//		printf("Open file failed\n");
//	else
//		printf("Open file success\n");
//	char str[20] = { 0 };
//	fgets(str, 10, fp);
//	printf("str is %s\n", str);
//	//char ch = getchar();
//	////2.read/write file
//	//while (ch != '#')
//	//{
//	//	fputc(ch, fp);
//	//	putchar(ch);
//	//	ch = getchar();
//	//}
//	FILE* fp1 = fopen("test2.txt", "w");
//	if (fp == NULL)
//		printf("Open file failed\n");
//	else
//		printf("Open file success\n");
//	char ch1 = fgetc(fp);
//	//2.read/write file
//	while (ch1 != -1)
//	{
//		fputc(ch1, fp1);
//		putchar(ch1);
//		ch1 = fgetc(fp);
//	}
//	fputs("\nChina\n", fp1);
//	//3.close file
//	if (fp)
//	{
//		fclose(fp);
//		if (fp == EOF)
//			printf("Close file failed\n");
//		else
//			printf("Close file success\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//1.read string from keyboard
//	char str[3][10];
//	int i = 0;
//	while (i < 3)
//	{
//		//scanf("%s", str[i++]);
//		gets(str[i++]);
//	}
//	//2.order strings
//	for(i = 0; i < 3; i++)
//		for (int j = i; j < 3; j++)
//		{
//			if (strcmp(str[j], str[j + 1]) > 0)
//			{
//				char temp[10];
//				strcpy(temp, str[j]);
//				strcpy(str[j], str[j + 1]);
//				strcpy(str[j + 1], temp);
//			}
//		}
//	//3.save strings as file
//	FILE* fp = fopen("data.txt", "w");
//	if (fp == NULL)
//	{
//		printf("Open file fail\n");
//		exit(0);
//	}
//	printf("\n The new sequence is:\n");
//	for (i = 0; i < 3; i++)
//	{
//		fputs(str[i], fp);
//		fputs("\n", fp);
//		printf("%s\n", str[i]);
//	}
//	return 0;
//}