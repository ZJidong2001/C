#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#pragma comment(lib, "add.lib")  // ���뾲̬��
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}

//void print(unsigned int n)  // ����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

//int my_strlen(char* s)  // ���ַ����ĳ���
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//
//int my_strlen(char* s)  // ���ַ����ĳ��ȣ��ݹ�ʵ��
//{
//	if (*s != '\0')
//	{
//		return 1 + my_strlen(s + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[10] = "abcd";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

// �ַ�ָ��+1�������1���ֽ�
// char *p;
// p+1 -> �����1���ֽ�

// ����ָ��+1�������4���ֽ�
// int *p;
// p+1 -> �����4���ֽ�

//int Fac(int n)  // ��n�Ľ׳�
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac(int n)  // ��n�Ľ׳ˣ��ݹ�ʵ��
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

int Fib(int n)  // ������ѭ����
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int Fib(int n)  // �ݹ�ʵ��
{

	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = Fib(n);
	printf("%d\n", ret);

	return 0;
}