#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()  // strcpy
//{
//	char arr1[20] = "xxxxxxxxx";  // 目标空间
//	char arr2[] = "hello";
//
//	char* ret = strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	printf("%s\n", ret);
//
//	return 0;
//}

//int main()  // memset
//{
//	char arr[] = "hello bit";  // xxxxx bit
//
//	char* ret = (char*)memset(arr, 'x', 5);
//
//	printf("%s\n", ret);
//
//	return 0;
//}

//int get_max(int x, int y)  // 求2个数的较大值
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//
//	max = get_max(a, get_max(4, 5));
//	printf("max = %d\n", max);
//
//	return 0;
//}

//void Swap(int x, int y)  // 两数交换传值调用（错误示范）
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	Swap(a, b);  // 实参a、b传给形参x、y的时候，形参将是实参的一份临时拷贝。改变形参变量x、y，是不会影响实参a和b的值
//
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//void Swap(int* px, int* py)  // 两数交换传址调用
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	Swap(&a, &b);
//
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

#include <math.h>

//int is_prime(int n)  // 判断n是否为素数
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)  // 100-200之间的素数
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int is_leap_year(int y)  // 判断y是否为闰年
//{
//	if (y % 4 == 0)
//	{
//		if (y % 100 != 0)
//		{
//			return 1;
//		}
//	}
//	if (y % 400 == 0)
//		return 1;
//
//	return 0;
//}
//
//int is_leap_year(int y)  // 判断y是否为闰年
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int is_leap_year(int y)  // 判断y是否为闰年
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//int binary_search(int arr[], int k, int sz)  // 二分查找
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);  // 计算数组的元素个数
//
//	int ret = binary_search(arr, k, sz);  // TDD - 测试驱动开发
//
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了,下标是：%d\n", ret);
//
//	return 0;
//}

//void Add(int* p)  // 每调用一次这个函数，就会将num的值增加1
//{
//	*p = *p + 1;
//}
//
//int main()
//{
//	int num = 0;
//
//	Add(&num);
//	printf("%d\n", num);  // 1
//	Add(&num);
//	printf("%d\n", num);  // 2
//	Add(&num);
//	printf("%d\n", num);  // 3
//
//	return 0;
//}

//int main()
//{
//	// 嵌套定义是不支持的 - err
//	void test()
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

int main()
{
	int len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n", strlen("abc"));  // 链式访问

	char arr1[20] = "xxxxxx";
	char arr2[20] = "abc";

	printf("%s\n", strcpy(arr1, arr2));

	printf("%d", printf("%d", printf("%d", 43)));

	return 0;
}