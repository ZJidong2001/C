#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()  // 一个工程里有且仅有一个main函数
//{
//	printf("hehe\n");
//	return 0;
//}

//int a = 100;  // 全局变量
//
//void test()
//{
//	printf("%d\n", a);  // 没有局部变量时，使用全局变量 - 100
//}
//
//int main()
//{
//	int a = 10;  // 局部变量
//
//	printf("%d\n", a);  // 局部优先 - 10
//	a = 20;
//	test();
//	printf("%d\n", a);  // 局部优先 - 20
//
//	return 0;
//}

//int main()
//{
//	int b = 100;
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//		printf("b = %d\n", b);
//
//	}
//	printf("b = %d\n", b);
//	return 0;
//}

//int a = 100;
//
//void test()
//{
//	printf("test: a=%d\n", a);
//}
//
//int main()
//{
//	test();
//	printf("main: a=%d\n", a);
//
//	return 0;
//}

//extern int g_val;  // 声明外部变量
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()  // 字面常量
//{
//	100;
//	3.14;
//	'a';
//
//	return 0;
//}

//int main()  // const修饰的常变量 - 本质是变量，只是具有了常属性
//{
//	int a = 100;  // 局部变量
//	a = 200;
//	printf("%d\n", a);
//
//	const int b = 100;
//	b = 200;  // 一个变量不能被改变我们就说具有常属性 - 不能被改变的属性
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int arr1[100] = { 0 };  // 定义数组，[]内为常量
//
//	int m = 100;
//	int arr2[m] = { 0 };  // err，m为变量
//
//	const int n = 100;
//	int arr3[n] = { 0 };  // err，n只是具有了常属性，不能被修改而已，但本质是变量
//
//	return 0;
//}

//#define MAX 100  // #define定义的标识符常量
//
//int main()
//{
//	MAX = 200;  // err，MAX为常量
//
//	int a = MAX;
//	printf("a = %d\n", a);
//
//	int arr[MAX] = {0};  // MAX为常量，可用来定义数组
//
//	return 0;
//}

//enum Sex  // 枚举类型
//{
//	MALE = 3,  //枚举常量 - 枚举的可能取值
//	FEMALE = 7,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = SECRET;
//
//	printf("%d\n", MALE);  // 3
//	printf("%d\n", FEMALE);  // 7
//	printf("%d\n", SECRET);  // 8
//
//	MALE = 4;  // err，枚举常量不能被修改
//
//	return 0;
//}

//int main()
//{
//	// char - 字符类型;
//	// C语言没有字符串类型 - 通过字符数组来存储字符串
//	// "abcdef"  - 字符串字面值
//
//	char ch[] = "abcdef";
//	printf("%s\n", ch);  // %s - 打印字符串的格式
//
//	return 0;
//}

//#include <string.h>
//
//int main()  // strlen是string.h的库函数 - 求字符串长度，\0是字符串的结束标志，不算长度
//{
//	char ch1[] = "abcdef";
//	printf("%s\n", ch1);
//	printf("%d\n", strlen(ch1));
//
//	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f','\0' };
//	printf("%s\n", ch2);
//	printf("%d\n", strlen(ch2));
//
//	char ch3[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%s\n", ch3);
//	printf("%d\n", strlen(ch3));
//
//	return 0;
//}

//int main()  // 转义字符
//{
//	printf("abcd\n");
//	printf("abcdn");
//
//	printf("%s\n", "c:\test\test.c");
//	printf("%s\n", "c:\\test\\test.c");
//	return 0;
//}

//int main()
//{
//	// 三字母词（古老的概念，已不常见）
//	// ??) --> ]
//	// ??( --> [
//
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');  // \'
//
//	printf("%s\n", "\"");  // \"
//	
//	printf("%s\n", "c:\\test\\test.c");  // \\ \t
//
//	printf("%c\n", '\065');  // \ddd - ddd的8进制数字转换成10进制后的值，作为ASCII值代表的字符
//	// 8进制的065转换成10进制是：53
//
//	printf("%c\n", '\x51');  // \xdd - dd的16进制数字转换成10进制后的值，作为ASCII值代表的字符
//
//	return 0;
//}

//int main()
//{
//	// C++注释风格
//	int a = 10;	// 创建整型变量a，并赋值10
//
//	/*
//	  C语言的注释风格
//	*/
//	int b = 20;  /* 创建整型变量b，并赋值20 */
//
//	return 0;
//}

//int main()  // 选择语句
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好敲代码吗(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}

//int main()  // 循环语句
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		line++;
//		printf("敲代码:%d\n", line);
//	}
//
//	if (line >= 20000)
//		printf("好offer\n");
//
//	return 0;
//}

//int Add(int x, int y)  // 函数
//{
//	int sum = 0;
//	sum = x + y;
//	return sum;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d %d", &num1, &num2);  // 输入
//
//	sum = Add(num1, num2);  // 函数计算
//
//	printf("%d\n", sum);  // 输出
//
//	return 0;
//}

//int main()  // 数组
//{
//	// int a = 1;
//	// int b = 2;
//	// int c = 3;
//	// ...
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int i = 0;
//	while (i < 10)  // 顺序访问数组元素并打印
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	printf("\n");
//
//	int j = 9;
//	while (j >= 0)  // 逆序访问数组元素并打印
//	{
//		printf("%d ", arr[j]);
//		j--;
//	}
//
//	return 0;
//}

//int main()  // / - 操作数全为整数时结果是商，操作数有浮点数时结果是精确小数
//{
//	float a = 5 / 2;
//	float b = 5.0 / 2.0;
//	float c = 5.0 / 2;
//	float d = 5 / 2.0;
//
//	printf("%f\n", a);
//	printf("%f\n", b);
//	printf("%f\n", c);
//	printf("%f\n", d);
//
//	return 0;
//}

//int main()  // % - 两个操作数必须为整数，返回整除之后的余数，余数也为整数
//{
//	int a = 7 % 2;  // 3...1
//	printf("%d\n", a);
//
//	return 0;
//}

int main()  // << - 移动的是二进制位
{
	int a = 6;
	// 00000000000000000000000000000110

	int b = a << 1;
	// 00000000000000000000000000001100

	printf("%d\n", a);  // 类似于b=a+1，a的值不变
	printf("%d\n", b);  // 12

	return 0;
}