#define _CRT_SECURE_NO_WARNINGS

//// �����ֵ���Ϸ
//// 1. ����һ�������
//// 2. �����֣���С���ԣ�
//// 3. ���Է�����
//
//#include <stdio.h>
//#include <stdlib.h>
//#include  <time.h>
//
//void menu()
//{
//	printf("***************************\n");
//	printf("*******   1. play    ******\n");
//	printf("*******   0. exit    ******\n");
//	printf("***************************\n");
//}
//
//void game()  // ��������Ϸ���߼�
//{
//	int guess = 0;
//
//	// 1. �����������1~100��
//	int ret = rand() % 100 + 1;
//
//	// 2. ������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//
//	srand((unsigned int)time(NULL));  // ������������������,��ʱ�����Ϊ����
//
//	do
//	{
//		menu();  // ��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();  // ������Ϸ����
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

#include <stdio.h>

//int main()  // д���뽫�������������Ӵ�С���
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d %d", &a, &b, &c);  // ����
//
//	int tmp = 0;
//	if (a < b)  // ����
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);  // ���
//
//	return 0;
//}

//int main()  // дһ�������ӡ1-100֮������3�ı���������
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)  // �ж�i�Ƿ�Ϊ3�ı���
//		{
//			printf("%d ", i);
//		}
//	}
//
//	printf("\n");
//
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()  // ���������������������������Լ�����������
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? b : a);
//
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			printf("���Լ���ǣ�%d\n", m);
//			break;
//		}
//		m--;
//	}
//	return 0;
//}

//int main()  // ���������������������������Լ����շת�����
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int r = 0;
//
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()  // ��ӡ1000�굽2000��֮�������
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//			printf("%d ", year);
//		else if (year % 400 == 0)
//			printf("%d ", year);
//	}
//}

//int main()  // ��ӡ1000�굽2000��֮�������
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//			printf("%d ", year);
//		if (year % 400 == 0)
//			printf("%d ", year);
//	}
//}

//int main()  // ��ӡ1000�굽2000��֮������꣨����ʾ����
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//				printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//			printf("%d ", year);
//	}
//}

//int main()  // ��ӡ1000�굽2000��֮�������
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//	return 0;
//}

//int main()  // ��ӡ100~200֮�����������2~i-1֮�������ȡ�Գ�i
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

#include <math.h>

//int main()  // ��ӡ100~200֮�����������2~sqrt(i)֮�������ȡ�Գ�i
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int main()  // ��ӡ100~200֮�����������2~sqrt(i)֮�������ȡ�Գ�i��ֻ�ṩ����
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int main()  // ��1~100����������9�ĸ���
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}

//int main()  // �ҳ�10�����е����ֵ
//{
//	int arr[10] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = arr[0];  // �����һ��Ԫ�ؾ�������
//
//	for (i = 1; i < 10; i++) // ��ʣ�µ�9��Ԫ�غ�max�Ƚ�
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()  // �ҳ�10�����е����ֵ������ʾ����
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = 0;  // err������Ԫ��ȫΪ����ʱ�������
//
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

int main()  // ����Ļ�����9 * 9�˷��ھ���
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", j, i, i * j);
		}
		printf("\n");
	}

	return 0;
}