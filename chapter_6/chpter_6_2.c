#define _CRT_SECURE_NO_WARNINGS
////8.�Ұ���---������󣬸�����С
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
//			max = arr[i][0];//���迪ʼԪ�����
//			//1.����һ�У��ҳ��������ֵ
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				max_j = j;
//			}
//		}
//		//�������ֵ���ڵ��У�����Ԫ���Ƿ�Ϊ��Сֵ
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[j][max_j] < arr[i][max_j])
//				break;
//		}
//		if (j == 4)
//			printf("�ҵ������ˣ���%d���±�Ϊ[%d][%d]\n", max, i, max_j);
//	}
//
//	return 0;
//}

//9.