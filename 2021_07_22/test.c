#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()  // strcpy
//{
//	char arr1[20] = "xxxxxxxxx";  // Ŀ��ռ�
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

//int get_max(int x, int y)  // ��2�����Ľϴ�ֵ
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

//void Swap(int x, int y)  // ����������ֵ���ã�����ʾ����
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
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	Swap(a, b);  // ʵ��a��b�����β�x��y��ʱ���βν���ʵ�ε�һ����ʱ�������ı��βα���x��y���ǲ���Ӱ��ʵ��a��b��ֵ
//
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//void Swap(int* px, int* py)  // ����������ַ����
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
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	Swap(&a, &b);
//
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

#include <math.h>

//int is_prime(int n)  // �ж�n�Ƿ�Ϊ����
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
//	for (i = 100; i <= 200; i++)  // 100-200֮�������
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

//int is_leap_year(int y)  // �ж�y�Ƿ�Ϊ����
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
//int is_leap_year(int y)  // �ж�y�Ƿ�Ϊ����
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int is_leap_year(int y)  // �ж�y�Ƿ�Ϊ����
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

//int binary_search(int arr[], int k, int sz)  // ���ֲ���
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
//	int sz = sizeof(arr) / sizeof(arr[0]);  // ���������Ԫ�ظ���
//
//	int ret = binary_search(arr, k, sz);  // TDD - ������������
//
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ���,�±��ǣ�%d\n", ret);
//
//	return 0;
//}

//void Add(int* p)  // ÿ����һ������������ͻὫnum��ֵ����1
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
//	// Ƕ�׶����ǲ�֧�ֵ� - err
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
	printf("%d\n", strlen("abc"));  // ��ʽ����

	char arr1[20] = "xxxxxx";
	char arr2[20] = "abc";

	printf("%s\n", strcpy(arr1, arr2));

	printf("%d", printf("%d", printf("%d", 43)));

	return 0;
}