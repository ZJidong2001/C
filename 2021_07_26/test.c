#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int test()
//{
//	int a = 10;
//	int b = 20;
//	return a, b;  // err���޷�return����ֵ�����ű��ʽ���������Ľ��
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//
//	return 0;
//}

//void test(int arr[])  // ͨ�����鴫����ֵ
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

//void test(int* px, int* py)  // ͨ��������ַ������ֵ
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
//void test()  // ͨ��ȫ�ֱ���������ֵ
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

//void print_table(int n)  // ��ӡ�˷��ھ���
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
//void reverse_string(char* str)  // �����ַ�����ѭ����
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
//void reverse_string(char str[])  // �����ַ������ݹ飩
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

//int DigitSum(unsigned int n)  // ����ÿλ���ĺ�
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

//double Pow(int n, int k)  // ��n��k�η�
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
//	double ret = Pow(n, k);  // �⺯���е�pow���Ǽ���η��� - ��Ҫͬ��
//	printf("%lf\n", ret);
//	return 0;
//}

//int main()  // ����Ĵ�������ʼ��
//{
//	int arr1[5];  // ���������δ��ʼ������ʱ��Ҫ���������С
//	int arr2[20] = { 1,2,3 };  // ����ȫ��ʼ����ʣ���Ĭ�ϳ�ʼ��Ϊ0
//	int arr3[] = { 1,2,3 };  // ���鴴������ʼ������ʱ����Ҫ���������С
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
//	// �ṹ������Ҳ���Դ���������ǰ����ṹ��
//
//	printf("%d\n", arr[4]);  // ��������Ԫ��
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);  // ��������Ԫ�ظ���
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

	int sz = sizeof(arr) / sizeof(arr[0]);  // ��������Ԫ�ظ���
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%p\n", &arr[i]);
	}
	return 0;
}