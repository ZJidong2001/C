#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()  // 移位操作符的操作数必须是整型
//{
//	int a = 10;
//	a >> 1;
//
//	float b = 4.5f;
//	b >> 1;  // err
//
//	return 0;
//}

//int main()  // & - 按（2进制）位与，只要有0则为0
//{
//	int a = 3;
//	int b = -2;
//	int c = a & b;
//
//	// 00000000000000000000000000000011 - 3
//	// 10000000000000000000000000000010 - -2原码
//	// 11111111111111111111111111111101 - -2反码
//	// 11111111111111111111111111111110 - -2补码
//	// 00000000000000000000000000000010 - 2
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()  // | - 按（2进制）位或，只要有1则为1
//{
//	int a = 3;
//	int b = -2;
//	int c = a | b;
//
//	// 00000000000000000000000000000011 - 3
//	// 10000000000000000000000000000010 - -2原码
//	// 11111111111111111111111111111101 - -2反码
//	// 11111111111111111111111111111110 - -2补码
//	// 11111111111111111111111111111111 - 补码
//	// 11111111111111111111111111111110 - 反码
//	// 10000000000000000000000000000001 - 原码-1
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()  // ^ - 按（2进制）位异或，相同为0相异为1
//{
//	int a = 3;
//	int b = -2;
//	int c = a ^ b;
//
//	// 00000000000000000000000000000011 - 3
//	// 10000000000000000000000000000010 - -2原码
//	// 11111111111111111111111111111101 - -2反码
//	// 11111111111111111111111111111110 - -2补码
//	// 11111111111111111111111111111101 - 补码
//	// 11111111111111111111111111111100 - 反码
//	// 10000000000000000000000000000011 - 原码-3
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()  // 统计某个整数的二进制中1的个数
//{
//	int count = 0;
//	int a = 0;
//	scanf("%d", &a);
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (a & 1 == 1)  // 判断低位是否为1
//		{
//			count++;
//		}
//		a = a >> 1;  // 右移二进制位
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()  // 实现两数交换，创建临时变量
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	tmp = a;
//	a = b;
//	b = tmp;
//
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}
//
//int main()  // 实现两数交换，加减交错（溢出的问题）
//{
//	int a = 3;
//	int b = 5;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}
//
//int main()  // 实现两数交换，异或（代码的可读性不够好，只适用于整型）
//{
//	int a = 3;
//	int b = 5;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()  // 连续赋值
//{
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	a = x = y + 1;  // 连续赋值，但不建议这样写
//	//x = y + 1;
//	//a = x;
//
//	printf("%d\n", a);
//	printf("%d\n", x);
//	printf("%d\n", y);
//
//	return 0;
//}

//int main()  // 复合赋值
//{
//	int a = 10;
//
//	a >>= 1;
//	//a = a >> 1;
//
//	a += 10;
//	//a = a + 10;
//
//	return 0;
//}

//int main()  // !（逻辑反操作）
//{
//	int a = 0;
//	int b = !a;
//	printf("%d\n", b);
//
//	a = 10;
//	if (a)  // a为真打印hehe
//	{
//		printf("hehe\n");
//	}
//	if (!a)  // a为假打印haha
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//int main()  // -（负值）
//{
//	int a = 10;
//	a = -a;
//	printf("a=%d\n", a);
//	a = -a;
//	printf("a=%d\n", a);
//
//	return 0;
//}

//int main()  // &（取地址），*（解引用）
//{
//	int a = 10;
//
//	int* p = &a;  // p是指针变量，指向的类型为整型
//
//	int b = *p;
//
//	*p = 20;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//int main()  // 数组取地址
//{
//	int arr[10] = { 0 };
//	arr;  // 数组首元素的地址
//	&arr[0];  // 数组首元素的地址
//	&arr[9];  // 取出的是第10个元素的地址
//	&arr;  // 取出数组的地址
//
//	return 0;
//}

//int main()  // sizeof - 计算变量或者类型创建变量的内存大小，操作符，不是函数
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));  // 4
//	printf("%d\n", sizeof a);  // 4
//
//	printf("%d\n", sizeof(int));  // 4
//	printf("%d\n", sizeof int);  // err
//
//	return 0;
//}

#include <string.h>

//int main()  // sizeof和strlen的比较
//{
//	char arr[10] = "abc";
//	printf("%d\n", sizeof(arr));  // 10
//	printf("%d\n", strlen(arr));  // 3 字符串的长度，关注的内存中是否有\0，计算的是\0之前出现的字符个数
//	return 0;
//}

//int main()  // sizeof内部的表达式不参与运算
//{
//	int a = 5;
//	short s = 10;
//	printf("%d\n", sizeof(s = a + 2));  // 2 整型截断
//	printf("%d\n", s);  // 10
//
//	return 0;
//}

//int main()  // ~（按位取反）
//{
//	int a = 0;
//	int b = ~a;
//
//	// 00000000000000000000000000000000 - 0
//	// 11111111111111111111111111111111 - 补码
//	// 11111111111111111111111111111110 - 反码
//	// 10000000000000000000000000000001 - 原码-1
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()  // 将某个整数的指定二进制位改为1或0
//{
//	int a = 13;
//	// 00000000000000000000000000001101
//
//	// 将第5位改为1，变为
//	// 00000000000000000000000000011101
//	a |= (1 << (5 - 1));
//	printf("%d\n", a);
//
//	// 将第3位改为0，变为
//	// 00000000000000000000000000011001
//	a &= (~(1 << (3 - 1)));
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()  // 前置/后置 ++/--
//{
//	int a = 0;
//	int b = 0;
//
//	a = 10;
//	b = a++;  // 后置++，先使用，再++
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	a = 10;
//	b = ++a;  // 前置++，先++，后使用
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	a = 10;
//	b = --a;  // 前置--,先--，再使用
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	a = 10;
//	b = a--;  // 后置--，先使用，再--
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//int main()  // ++/--的垃圾代码
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);  // err
//	printf("b=%d\n", b);
//	return 0;
//}

//int main()  // () （强制类型转换）
//{
//	int a = (int)3.14;  // 默认写出的浮点数是double的
//	printf("%d\n", a);
//	return 0;
//}

//void test1(int arr[10])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[10])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()  // &&（逻辑与）||（逻辑或）
//{
//	int a = 1;
//	int b = 0;
//
//	int c = a && b;  // 逻辑与
//	printf("c=%d\n", c);
//
//	int d = a || b;  // 逻辑或
//	printf("d=%d\n", d);
//
//	return 0;
//}

//int main()  // &&和||的使用
//{
//	int age = 0;
//	if (age >= 10 && age <= 30)
//	{
//
//	}
//	if (age < 10 || age>30)
//	{
//
//	}
//	return 0;
//}

//int main()  // &&和||有短路效果，若前面条件已经得出结果，后面不再执行
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//
//	printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
//
//	return 0;
//}

int main() // ?:（三目操作符/条件操作符）
{
	int a = 3;
	int b = 5;
	int m = 0;

	m = ((a > b) ? (a) : (b));
	//((a > b) ? (m = a) : (m = b));

	printf("%d\n", m);

	return 0;
}