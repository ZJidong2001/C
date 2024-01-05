#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  // stdio - 标准输入输出

//int main()  // 主函数 - 程序的入口 - 有且仅有一个主函数
//{
//	// 库函数 - 打印函数 - 输出函数 - 需要包含stdio.h头文件
//	printf("hello world\n");  // \n - 换行
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//
//	return 0;  // 程序的出口
//}

//int main(void)  // void - 明确的告诉我们，main函数不需要参数
//{
// 
//	return 0;
//}

//int main(int argc, char* argv[])  // main函数其实是可以有参数的
//{
//
//	return 0;
//}

//void main()  // 过时了
//{
//
//}

//int main()
//{
//	int age = 10;  // int - 整型
//	int price = 50;
//	double weight = 55.5;  // double - 双精度浮点型
//
//	return 0;
//}

//int main()  // sizeof - 计算一个类型创建的变量所占空间的大小
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

//int main()  // 字符 - ASCII码
//{
//	// abcdef!@#$等字符在计算机以二进制形式存储
//
//	char ch = 'e';
//	printf("%c\n", ch);  // %c - 以字符格式打印
//	printf("%d\n", ch);  // %d - 以十进制整数格式打印
//
//	return 0;
//}

//int main()  // 变量
//{
//	short age = 10;  // age是变量，其值可修改
//	age = 11;
//	printf("%d\n", age);
//
//	return 0;
//}

//int g = 100;  // 全局变量
//
//void test()
//{
//	int b = 1000;  // 局部变量
//}
//
//int main()
//{
//	int a = 10;  // 局部变量
//
//	return 0;
//}

//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);  // 全局变量和局部变量同名时，局部变量优先
//	return 0;
//}

int main()  // 2个整数相加
{
	int num1 = 0;
	int num2 = 0;

	scanf("%d%d", &num1, &num2);  // 输入

	int sum = num1 + num2;  // 做加法

	printf("%d\n", sum);  // 输出

	return 0;
}