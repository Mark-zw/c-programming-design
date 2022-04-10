#define _CRT_SECURE_NO_WARNINGS
////8.找鞍点---该行最大，该列最小
//#include<stdio.h>
//int main()
//{
//	int arr[4][4] = {
//		{4,3,2,1},
//		{5,6,7,8},
//		{3,2,1,0},
//		{10,9,8,7}
//	};
//	int max, max_j = 0, i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			max = arr[i][0];//假设开始元素最大
//			//1.遍历一行，找出该行最大值
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				max_j = j;
//			}
//		}
//		//遍历最大值所在的列，看该元素是否为最小值
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[j][max_j] < arr[i][max_j])
//				break;
//		}
//		if (j == 4)
//			printf("找到鞍点了，是%d，下标为[%d][%d]\n", max, i, max_j);
//	}
//
//	return 0;
//}

//9.