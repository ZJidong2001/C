#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include <string.h>
//
//int main()  // strcpy - string copy - 字符串拷贝
//{
//	char arr1[] = "abcdef";
//	char arr2[10] = "xxxxxxxxx";
//
//	strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//
//	return 0;
//}

// 模拟实现strcpy 第一个版本
//void my_strcpy(char* dst, char* src)  // dst是指向目标空间的指针，src是指向源字符串的指针
//{
//	while (*src != '\0')
//	{
//		*dst = *src;
//		dst++;
//		src++;
//	}
//	*dst = *src;  // \0
//}
//
//int main()
//{
//	char arr1[] = "abcdef";  // [a b c d e f \0]
//	char arr2[10] = "xxxxxxxxx";  // [                    ]
//
//	my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//
//	return 0;
//}

// 模拟实现strcpy 第二个版本
//void my_strcpy(char* dst, char* src)
//{
//	while (*src != '\0')
//	{
//		*dst++ = *src++;
//	}
//	*dst = *src;  // \0
//}
//
//int main()
//{
//	char arr1[] = "abcdef";  // [a b c d e f \0]
//	char arr2[10] = "xxxxxxxxx";  // [                    ]
//
//	my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//
//	return 0;
//}

// 模拟实现strcpy 第三个版本
//void my_strcpy(char* dst, char* src)
//{
//	while (*dst++ = *src++)  // 遇到\0 循环停止
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcdef";  // [a b c d e f \0]
//	char arr2[10] = "xxxxxxxxx";  // [                    ]
//
//	my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//
//	return 0;
//}

#include <assert.h>  // 使用assert需包含该头文件

// 模拟实现strcpy 第四个版本
//void my_strcpy(char* dst, char* src)
//{
//	//if (src == NULL || dst == NULL)  // 如果src或dst传的是空指针NULL，无法对其进行解引用。若不判断是否为NULL，代码则会崩溃
//	//{
//	//	return;
//	//}
//
//	//assert(src != NULL);  // 断言 - 不是函数，而是宏定义 - release版本可以优化掉 - 比if语句无法优化更好
//	//assert(dst != NULL);
//
//	assert(src && dst);
//
//	while (*dst++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcdef";  // [a b c d e f \0]
//	char arr2[10] = "xxxxxxxxx";  // [                    ]
//
//	my_strcpy(arr2, NULL);
//
//	printf("%s\n", arr2);
//
//	return 0;
//}

// 模拟实现strcpy 第五个版本
//void my_strcpy(char* dst, const char* src)
//{
//	assert(src && dst);
//
//	while (*dst++ = *src++)  // 如果误写成*src++ = *dst++，会导致修改*src的值，引起bug，故需要const修饰，使其编译都无法通过
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcdef";  // [a b c d e f \0]
//	char arr2[10] = "xxxxxxxxx";  // [                    ]
//
//	my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//
//	return 0;
//}

// 模拟实现strcpy 第六个版本
//char* my_strcpy(char* dst, const char* src)
//{
//	assert(src && dst);
//	char* ret = dst;
//	while (*dst++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";  // [a b c d e f \0]
//	char arr2[10] = "xxxxxxxxx";  // [                    ]
//
//	char* ret = my_strcpy(arr2, arr1);
//
//	printf("%s\n", ret);
//
//	return 0;
//}

//int main()  // const未修饰指针
//{
//	const int num = 10;  // num是常变量，其值不可修改
//	//num = 20;  // err
//
//	int* p = &num;
//	*p = 20;  // num是常变量，无法直接修改其值，但可以通过指针修改num的值
//
//	return 0;
//}

//int main()  // const修饰指针
//{
//	int num1 = 10;
//	int num2 = 20;
//
//	// const放在*的左边 - 修饰的是指针指向的内容（*p）
//	// 指针指向的内容不能通过指针来改变，但是指针变量本身是可以改变的
//	const int* p1 = &num1;  // int const* p1 = &num1; - 等价写法
//	*p1 = 20;  // err
//	p1 = &num2;  // ok
//
//	// const放在*的右边 - 修饰的是指针变量本身（p）
//	// 指针变量本身不能修改，但是指针指向的内容可以修改
//	int* const p2 = &num1;
//	*p2 = 20;  // ok
//	p2 = &num2;  // err
//
//	return 0;
//}

// 模拟实现strlen
//size_t my_strlen(const char* str)  // size_t - unsigned int - 范围比int大一倍
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

//#include <string.h>
//
//int main()  // strlen的返回类型为unsigned int
//{
//	// 10000000000000000000000000000011
//	// 11111111111111111111111111111100
//	// 11111111111111111111111111111101 - 全部是数值位
//
//	if (strlen("abc") - strlen("abcdef") > 0)  // 两个无符号数相减也被理解为无符号数
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//size_t count_bit_one(int n)  // 法一
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//size_t count_bit_one(unsigned int n)  // 法二
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//
//size_t count_bit_one(int n)  // 法三（推荐）
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()  // 统计二进制中1的个数
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	size_t ret = count_bit_one(num);
//
//	printf("%u\n", ret);
//
//	return 0;
//}

int main()  // 判断一个数是不是2的次方数
{
	int n = 0;
	scanf("%d", &n);
	if ((n & (n - 1)) == 0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}