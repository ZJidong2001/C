#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 影响表达式求值的两个方面
// 1.优先级和结合性
// 2.类型转换

//int main()  // 显式类型转换
//{
//	int a = (int)3.14;
//	return 0;
//}

//int main()  // 隐式类型转换
//{
//	char a = 3;
//	// 00000000000000000000000000000011 - 3
//	// a是1byte（8bit），进行整型截断存储到a中
//	// 00000011 - a
//
//	char b = 127;
//	// 00000000000000000000000001111111 - 127
//	// b是1byte（8bit），进行整型截断存储到b中
//	// 01111111 - b
//	
//	char c = a + b;
//	// a和b都是char类型，自身大小都是1byte，所以这里计算的时候要对a和b进行整型提升
//	// 00000000000000000000000000000011 - a整型提升
//	// 00000000000000000000000001111111 - b整型提升
//	// 00000000000000000000000010000010
//	// c是1byte（8bit），进行整型截断存储到c中
//	// 10000010 - c
//	
//	printf("%d\n", c);
//	// %d打印int类型，而c为char类型，故需要进行整型提升
//	// 11111111111111111111111110000010 - 补码
//	// 11111111111111111111111110000001 - 反码
//	// 10000000000000000000000001111110 - 原码 - -126
//
//	return 0;
//}

//int main()  // 整型提升的例子
//{
//	char a = 0xb6;  // 10110110 - a
//	short b = 0xb600;  // 1011011000000000 - b
//	int c = 0xb6000000;  // 10110110000000000000000000000000 - c
//
//	if (a == 0xb6)  // 11111111111111111111111110110110 - a整型提升
//		printf("a");
//	if (b == 0xb600)  // 11111111111111111011011000000000 - b整型提升
//		printf("b");
//	if (c == 0xb6000000)  // 10110110000000000000000000000000 - c整型提升
//		printf("c");
//
//	return 0;
//}

//int main()  // 整型提升的例子
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));  // 1
//	printf("%u\n", sizeof(+c));  // 4
//	printf("%u\n", sizeof(-c));  // 4
//
//	return 0;
//}

//int main()  // 算术转换
//{
//	int a = 4;
//	float f = 4.5f;
//	float r = a + f;  // 将精度较低的int转换为float在进行计算
//
//	return 0;
//}

//int main()  // 操作符的优先级、结合性、求值顺序（查表格）
//{
//	int a = 2;
//	int b = 4;
//	int c = a + b * 3;  // 相邻操作符先执行优先级高的
//	int d = a + b + 3;  // 如果优先级相同取决于结合性
//
//	// &&、||、?:、, 影响表达式的求值顺序
//	// 如&&，第一个表达式结果为假，后面的表达式无需进行计算
//
//	return 0;
//}

//int main()  // 指针存放内存单元的地址
//{
//	int a = 10;
//	int* pa = &a;  // pa为指针变量，存放变量a的地址
//
//	char c = 'w';
//	char* pc = &c;  // pc为指针变量，存放变量c的地址
//
//	return 0;
//}

//int main()  // 指针类型的意义
//{
//	// 指针类型决定了指针解引用操作的时候，一次访问几个字节（访问内存的大小）
//	// int*指针解引用访问4个字节
//	// char*指针解引用访问1个字节
//
//	int a = 0x11223344;  // 通过调试看下面代码a的值的变化
//
//	char* pc = &a;
//	*pc = 0;
//	printf("%x\n", a);  // 以16进制打印
//
//	int* pa = &a;
//	*pa = 0;
//	printf("%x\n", a);  // 以16进制打印
//
//	return 0;
//}

//int main()  // 指针类型的意义
//{
//	// 指针类型决定了指针+-整数的时候，跳过的步长（指针+-整数的时候，跳过几个字节）
//	// int*指针+1 跳过4个字节
//	// char*指针+1 跳过1个字节
//
//	int a = 10;
//
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	printf("%p\n", pa + 2);
//	printf("%p\n", pc + 2);
//
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 0 };  // 40个字节
//
//	int* p1 = arr1;  // 数组名为数组首元素的地址，&arr1[0] - int*
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p1 + i) = 1;  // 调试查看，0x00000001
//	}
//
//	int arr2[10] = { 0 };  // 40个字节
//
//	char* p2 = arr2;
//	int j = 0;
//	for (j = 0; j < 40; j++)
//	{
//		*(p2 + j) = 1;  // 调试查看，0x01
//	}
//
//	return 0;
//}

//int main()  // 野指针
//{
//    int* p;  // 局部变量指针未初始化，默认为随机值
//    *p = 20;  // 通过p中存的随机值作为地址，找到一个空间，这个空间不属于我们当前的程序
//    return 0;
//}

//int main()  // 野指针
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//        *(p++) = i;  // 当指针指向的范围超出数组arr的范围时，p就是野指针
//    }
//    return 0;
//}

//int* test()  // 野指针
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();  // 指针指向的空间释放
//	printf("hehe\n");
//	printf("%d\n", *p);
//
//	return 0;
//}

int main()  // 规避野指针
{
	int a = 10;
	int* p = &a;  // 明确地初始化，确定指向

	int* p2 = NULL;  // 不知道一个指针当前应该指向哪里时，可以初始化为NULL
	*p2 = 100;  // err

	if (p2 != NULL)  // 指针使用之前检查有效性
	{
		*p2 = 100;
	}

	return 0;
}