#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int test()
//{
//	int a = 10;
//	int b = 20;
//	return a, b;  // err，无法return两个值，逗号表达式，返回最后的结果
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//
//	return 0;
//}

//void test(int arr[])  // 通过数组传两个值
//{
//	int a = 10;
//	int b = 20;
//
//	arr[0] = a;
//	arr[1] = b;
//}
//
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//
//	printf("%d %d\n", arr[0], arr[1]);
//
//	return 0;
//}

//void test(int* px, int* py)  // 通过两个地址传两个值
//{
//	int a = 10;
//	int b = 20;
//	*px = a;
//	*py = b;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	test(&x, &y);
//
//	printf("%d %d\n", x, y);
//
//	return 0;
//}

//int x = 0;
//int y = 0;
//
//void test()  // 通过全局变量传两个值
//{
//	int a = 10;
//	int b = 20;
//	x = a;
//	y = b;
//}
//
//int main()
//{
//	test();
//	printf("%d %d\n", x, y);
//
//	return 0;
//}

//void print_table(int n)  // 打印乘法口诀表
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//#include <string.h>
//
//void reverse_string(char* str)  // 逆序字符串（循环）
//{
//	int len = strlen(str);
//
//	//char* left = str;
//	//char* right = str + len - 1;
//	int left = 0;  // 'a'
//	int right = len - 1;  // 'f'
//
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string(char str[])  // 逆序字符串（递归）
//{
//	int len = strlen(str);
//	char tmp = str[0];
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//
//	if (strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	str[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[20] = "abcdef";
//
//	reverse_string(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//int DigitSum(unsigned int n)  // 计算每位数的和
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	unsigned int num = 1729;
//	int ret = DigitSum(num);
//
//	printf("%d\n", ret);
//	return 0;
//}

//double Pow(int n, int k)  // 求n的k次方
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1.0;
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 2;
//	int k = -3;
//	double ret = Pow(n, k);  // 库函数中的pow就是计算次方的 - 不要同名
//	printf("%lf\n", ret);
//	return 0;
//}

//int main()  // 数组的创建及初始化
//{
//	int arr1[5];  // 数组仅创建未初始化，此时需要定义数组大小
//	int arr2[20] = { 1,2,3 };  // 不完全初始化，剩余的默认初始化为0
//	int arr3[] = { 1,2,3 };  // 数组创建并初始化，此时不需要定义数组大小
//	char arr4[] = "abc";
//	char arr5[] = { 'a', 'b', 'c' };
//	char arr6[] = { 'a', 98, 'c' };
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
//	float sc[5] = { 0.0f, 3.0f };
//	// 结构体数组也可以创建，需提前定义结构体
//
//	printf("%d\n", arr[4]);  // 访问数组元素
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);  // 计算数组元素个数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int a = 10;
	int* p = &a;
	printf("%p\n", p);
	printf("%p\n", p + 1);

	int sz = sizeof(arr) / sizeof(arr[0]);  // 计算数组元素个数
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%p\n", &arr[i]);
	}
	return 0;
}