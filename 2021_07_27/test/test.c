#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()  // ��ά����Ĵ�������ʼ��
//{
//	double d1[4][7];  // ��ά���鴴��ʱδ��ʼ�����趨��������к���
//
//	int arr1[3][5] = { 1,2,3,4,5,6,7,8,9,10,11 };  // ��λ����Ĵ�������ʼ��
//	int arr2[3][5] = { {1,2},{3,4},{5,6} };
//	int arr1[][5] = { {1,2},{3,4},{5,6} };  // ��ά���鴴��ʱ��ʼ������������ʱ��ʡ���У����в���ʡ��
//
//	char ch1[4][6] = { 'a', 'b' };
//	char ch2[4][6] = { {'a'},{ 'b'} };
//	char ch3[4][6] = { "abc", "def", "qwe" };
//
//	return 0;
//}

//int main()  // ��ά����Ĵ�ӡ
//{
//	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,0} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()  // ��ӡ��ά����ÿ��Ԫ�صĵ�ַ - �����洢
//{
//	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,0} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,0} };
//	int* p = &arr[0][0];
//	int i = 0;
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()  // Խ��
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);  // C���Բ����±�Խ����
//		arr[i] = 0;  // ����
//	}
//
//	return 0;
//}

//void Sort(int* arr, int sz)  // ��������
//{
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)  // ð�����������
//	{
//
//		int j = 0;
//		int flag = 1;  // �����Ѿ�����
//		for (j = 0; j < sz - 1 - i; j++)  // һ��ð������Ĺ���
//		{
//			if (arr[j] > arr[j + 1])  // ����
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void Print(int* p, int sz)  // ��ӡ����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", p[i]);
//		//printf("%d ", *(p + i));
//		printf("%d ", *p++);
//	}
//}
//
//int main()  // ���鴫��
//{
//	int arr[] = { 1,4,2,3,8,7,5,6,9,0 };
//
//	// ��������������sizeof�ڲ���ʱ���磺sizeof(arr)�������arr��ʾ�������飬������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// �������ڴ��ݸ�������ʱ�򣬻ή�������Ԫ�صĵ�ַ
//	// ���鴫��->ʵ���ϴ���ȥ��������Ԫ�صĵ�ַ
//	Sort(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}

// ������������Ԫ�صĵ�ַ
// ��2�����⣺
// 1. sizeof(������)���������������ʾ�������飬sizeof(������)���������������Ĵ�С
// 2. &���������������������ʾ�������飬ȡ����������ĵ�ַ

int main()
{
	int arr[10] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);
	printf("------------------------\n");
	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr + 1);

	return 0;
}