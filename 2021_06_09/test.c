#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()  // & - 取地址操作符
//{
//    int num = 10;  // 向内存申请4个字节的空间,里面存放10
//    &num;  // & - 取地址操作符，取出num的地址
//    printf("%p\n", &num);  // %p - 以地址的形式打印
//                           // 当变量超过1个byte时，取地址拿到的是第一个byte的地址（较小的地址），后面的根据创建变量类型顺藤摸瓜
//    return 0;
//}

//int main()  // 指针变量 - 存放地址的变量
//{
//	int a = 10;
//	int* pa = &a;  // *告诉我们创建的变量是指针变量，int告诉我们指针指向的对象是int类型
//	               // 通过pa我们可以找到a，所以我们可以简单的认为pa指向了a
//	return 0;
//}

//int main()  // * - 解引用操作符
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;  // * - 解引用操作符，通过*可以找到所指向的内存空间
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}

//int main()  // 指针变量的大小 - 32位机器指针变量大小统一为4byte，64位机器指针变量大小统一为8byte
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

struct Student  // 学生结构体类型
{
	char name[20];
	int age;
	char sex[5];
	char id[12];
};

struct Book  // 书结构体类型
{
	char name[20];
	int price;
	char author[20];
};

int main()
{
	struct Student s1;  // 创建学生结构体变量
	struct Student s2 = { "张三",20,"男","20200506" };  // 创建学生结构体变量并初始化
	struct Book b1 = { "C语言程序设计",55,"谭浩强" };  // 创建书结构体变量并初始化

	printf("名字：%s 年龄：%d 性别：%s 学号：%s\n", s2.name, s2.age, s2.sex, s2.id);  // .操作符 - （通过结构体变量）访问结构体变量里的成员

	struct Book* pb1 = &b1;  // 用结构体指针存储结构体变量的地址
	printf("书名：%s 价格：%d 作者：%s\n", (*pb1).name, (*pb1).price, (*pb1).author);
	printf("书名：%s 价格：%d 作者：%s\n", pb1->name, pb1->price, pb1->author);  // -> - （通过结构体指针）访问结构体变量里的成员

	return 0;
}