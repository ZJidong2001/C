#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()  // 二维数组的创建及初始化
//{
//	double d1[4][7];  // 二维数组创建时未初始化，需定义数组的行和列
//
//	int arr1[3][5] = { 1,2,3,4,5,6,7,8,9,10,11 };  // 二位数组的创建及初始化
//	int arr2[3][5] = { {1,2},{3,4},{5,6} };
//	int arr1[][5] = { {1,2},{3,4},{5,6} };  // 二维数组创建时初始化，定义数组时可省略行，但列不能省略
//
//	char ch1[4][6] = { 'a', 'b' };
//	char ch2[4][6] = { {'a'},{ 'b'} };
//	char ch3[4][6] = { "abc", "def", "qwe" };
//
//	return 0;
//}

//int main()  // 二维数组的打印
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

//int main()  // 打印二维数组每个元素的地址 - 连续存储
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

//int main()  // 越界
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);  // C语言不做下标越界检查
//		arr[i] = 0;  // 报错
//	}
//
//	return 0;
//}

//void Sort(int* arr, int sz)  // 数组排序
//{
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)  // 冒泡排序的趟数
//	{
//
//		int j = 0;
//		int flag = 1;  // 假设已经有序
//		for (j = 0; j < sz - 1 - i; j++)  // 一趟冒泡排序的过程
//		{
//			if (arr[j] > arr[j + 1])  // 交换
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
//void Print(int* p, int sz)  // 打印数组
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
//int main()  // 数组传参
//{
//	int arr[] = { 1,4,2,3,8,7,5,6,9,0 };
//
//	// 数组名单独放在sizeof内部的时候，如：sizeof(arr)，这里的arr表示整个数组，不是首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// 数组名在传递给函数的时候，会降级变成首元素的地址
//	// 数组传参->实际上传过去的数组首元素的地址
//	Sort(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}

// 数组名就是首元素的地址
// 有2个例外：
// 1. sizeof(数组名)，这里的数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小
// 2. &数组名，这里的数组名表示整个数组，取出的是数组的地址

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