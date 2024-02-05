#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int count_diff_bit(int n1, int n2)  // 法一
//{
//    int count = 0;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (((n1 >> i) & 1) != ((n2 >> i) & 1))
//        {
//            count++;
//        }
//    }
//    return count;
//}
//
//int NumberOf1(int n)
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & (n - 1);
//        count++;
//    }
//    return count;
//}
//
//int count_diff_bit(int n1, int n2)  // 法二
//{
//    int count = 0;
//    int t = n1 ^ n2;
//    count = NumberOf1(t);
//    return count;
//}
//
//int main()  // 求两个数二进制中不同位的个数
//{
//    int n1 = 0;
//    int n2 = 0;
//    scanf("%d%d", &n1, &n2);
//
//    int count = count_diff_bit(n1, n2);
//
//    printf("%d\n", count);
//
//    return 0;
//}

//int main()  // 打印整数二进制的奇数位和偶数位
//{
//    int num = 0;
//    scanf("%d", &num);
//    int i = 0;
//
//    printf("奇数位:");
//    for (i = 30; i >= 0; i -= 2)
//    {
//        printf("%d ", (num >> i) & 1);
//    }
//    printf("\n");
//
//    printf("偶数位:");
//    for (i = 31; i >= 1; i -= 2)
//    {
//        printf("%d ", (num >> i) & 1);
//    }
//    printf("\n");
//
//    return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()  // 函数栈帧
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = Add(a, b);

	printf("%d\n", c);

	return 0;
}