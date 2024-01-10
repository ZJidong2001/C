#define _CRT_SECURE_NO_WARNINGS

//// 猜数字的游戏
//// 1. 生成一个随机数
//// 2. 猜数字（大、小、对）
//// 3. 可以反复玩
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
//void game()  // 猜数字游戏的逻辑
//{
//	int guess = 0;
//
//	// 1. 生成随机数（1~100）
//	int ret = rand() % 100 + 1;
//
//	// 2. 猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//
//	srand((unsigned int)time(NULL));  // 设置随机数的生成起点,拿时间戳作为参数
//
//	do
//	{
//		menu();  // 打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();  // 调用游戏函数
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

#include <stdio.h>

//int main()  // 写代码将三个整数数按从大到小输出
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d %d", &a, &b, &c);  // 输入
//
//	int tmp = 0;
//	if (a < b)  // 调整
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
//	printf("%d %d %d\n", a, b, c);  // 输出
//
//	return 0;
//}

//int main()  // 写一个代码打印1-100之间所有3的倍数的数字
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)  // 判断i是否为3的倍数
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

//int main()  // 给定两个数，求这两个数的最大公约数，暴力求解
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
//			printf("最大公约数是：%d\n", m);
//			break;
//		}
//		m--;
//	}
//	return 0;
//}

//int main()  // 给定两个数，求这两个数的最大公约数，辗转相除法
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

//int main()  // 打印1000年到2000年之间的闰年
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

//int main()  // 打印1000年到2000年之间的闰年
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

//int main()  // 打印1000年到2000年之间的闰年（错误示范）
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

//int main()  // 打印1000年到2000年之间的闰年
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//	return 0;
//}

//int main()  // 打印100~200之间的素数，拿2~i-1之间的数字取试除i
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

//int main()  // 打印100~200之间的素数，拿2~sqrt(i)之间的数字取试除i
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

//int main()  // 打印100~200之间的素数，拿2~sqrt(i)之间的数字取试除i，只提供奇数
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

//int main()  // 数1~100所有整数中9的个数
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

//int main()  // 找出10个数中的最大值
//{
//	int arr[10] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = arr[0];  // 假设第一个元素就是最大的
//
//	for (i = 1; i < 10; i++) // 拿剩下的9个元素和max比较
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

//int main()  // 找出10个数中的最大值（错误示范）
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = 0;  // err，数组元素全为负数时结果错误
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

int main()  // 在屏幕上输出9 * 9乘法口诀表
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