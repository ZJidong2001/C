#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#define N_VALUES 5
//
//int main()  // 指针+整数
//{
//	float values[N_VALUES];
//	float* vp;
//
//	for (vp = &values[0]; vp < &values[N_VALUES];)  // &values[N_VALUES]只是获取地址，并没有越界访问。我获取了银行的地址并不代表我抢银行了
//	{
//		*vp++ = 0;  // ++优先级比*高，但注意是后置++，因此先*vp=0再vp+1
//	}
//
//	return 0;
//}

//int main()  // 指针-整数
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int* p = &arr[9];
//	printf("%p\n", p);
//	printf("%p\n", p - 2);
//
//	return 0;
//}

//int main()  // 指针-指针
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	// 指针-指针得到的数字的绝对值是指针和指针之间元素的个数
//	printf("%d\n", &arr[9] - &arr[0]);  // 9
//	printf("%d\n", &arr[0] - &arr[9]);  // -9
//	
//	char ch[5] = { 0 };
//
//	// 指针-指针的前提是两个指针指向同一块区域
//	printf("%d\n", &arr[9] - &ch[0]);  // err
//
//	return 0;
//}

//int my_strlen(char* s)  // 求字符串长度法一：计数器
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
//int my_strlen(char* s)  // 求字符串长度法二：指针-指针
//{
//	int count = 0;
//	char* start = s;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//#define N_VALUES 5
//
//int main()  // 指针的关系运算
//{
//	float values[N_VALUES];
//	float* vp;
//
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;  // --优先级比*高，因此先vp-1再*vp=0
//	}
//
//	return 0;
//}

//#define N_VALUES 5
//
//int main()  // 与上一段代码类似，但避免这样写，因为标准并不保证它可行
//{
//	// 标准规定：
//	// 允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向第一个元素之前的那个内存位置的指针进行比较
//	float values[N_VALUES];
//	float* vp;
//
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//
//	return 0;
//}

// 数组名是首元素的地址
// 但是有2个例外：
// 1.sizeof（数组名）— 这里的数组名不是首元素的地址，而是表示整个数组。这里计算的是整个数组的所占内存空间大小
// 2.&数组名—这里的数组名不是首元素的地址，而是表示整个数组。这里拿到的是整个数组的地址

//int main()  // 数组名
//{
//	int arr[10] = { 0 };
//
//	int* p = &arr[5];  // 取出下标为5的元素的地址
//	int* q = arr;  // 取出数组首元素的地址
//
//	int sz = sizeof(arr);  // 结果为40（整个数组的大小），而不是4/8（数组首元素地址的所占内存空间大小）
//	printf("%d\n", sz);
//
//	return 0;
//}

//int main()  // 数组名
//{
//	int arr[10] = { 0 };
//
//	printf("%p\n", arr);  // 数组名是首元素的地址
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);  // 第一个元素的地址
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);  // 取出整个数组的地址
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}

//int main()  // 数组和指针
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()  // 二级指针
//{
//	int a = 10;  // 开辟4byte空间
//
//	int* p = &a;  // p是指针
//
//	int** pp = &p;  // pp是二级指针
//	**pp = 20;
//	printf("%d\n", a);
//
//	int*** ppp = &pp;  // ppp是三级指针
//
//	return 0;
//}

//int main()  // 指针数组
//{
//	int arr[10];  // 整型数组 - 存放整型的数组
//	char ch[5];  // 字符数组 - 存放字符的数组
//
//	// 指针数组 - 存放指针的数组
//	int* parr[5];  // 整型指针的数组
//	char* pc[6];  // 字符指针的数组
//
//	return 0;
//}

//int main()  // 指针数组
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//	int* arr[3] = { &a, &b, &c };  // 指针数组
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//
//	return 0;
//}

//struct Book  // 结构体类型的声明
//{
//	char name[20];  // 成员变量
//	char author[15];
//	float price;
//};  // 没有在内存中开辟空间
//
//struct Point
//{
//	int x;
//	int y;
//}p1, p2;  // 声明类型的同时定义全局变量 - 静态区
//struct Point p3;  // 全局变量
//
//int main()
//{
//	struct Book b;  // 局部变量 - 栈区
//	struct Point p;  // 局部变量
//
//	return 0;
//}

//int main()  // 结构体类型也可以在main函数里定义，但是少见
//{
//	struct Book
//	{
//		char name[20];
//		char author[15];
//		float price;
//	};
//	struct Book b;
//
//	return 0;
//}

//typedef struct Stu  // 对结构体类型进行类型重定义
//{
//	char name[20];
//	int age;
//	char id[20];
//}Stu;  // Stu是类型，不是变量，注意typedef有无的区别
//
//int main()
//{
//	struct Stu s1;
//	Stu s2;  // 更简洁
//
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//}Stu;
//
//int main()  // 结构体初始化
//{
//	struct Stu s1 = { "张三", 20, "2020010506" };
//	Stu s2 = { "李四", 30, "2021020506" };
//
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//struct T
//{
//	struct S s;  // 成员变量为结构体
//	char name[20];
//	int num;
//};
//
//int main()  // 成员变量为结构体的结构体初始化
//{
//	struct T t = { {100,'c', 3.14}, "lisi", 30 };
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//struct T
//{
//	struct S s;
//	char name[20];
//	int num;
//};
//
//int main()  // 结构体成员访问
//{
//	struct T t = { {100, 'w', 3.14}, "zhangsan", 200 };
//	printf("%d %c %f %s %d\n", t.s.a, t.s.c, t.s.d, t.name, t.num);
//
//	struct T* pt = &t;
//	printf("%d %c %f %s %d\n", pt->s.a, pt->s.c, pt->s.d, pt->name, pt->num);
//
//	return 0;
//}

struct S
{
	int arr[100];
	int num;
	char ch;
	double d;
};

void print1(struct S ss)  // 传值调用，开辟空间临时拷贝，空间消耗太大
{
	printf("%d %d %d %d %c %lf\n", ss.arr[0], ss.arr[1], ss.arr[2], ss.num, ss.ch, ss.d);
}

void print2(struct S* ps)  // 传址调用，4/8byte
{
	printf("%d %d %d %d %c %lf\n", ps->arr[0], ps->arr[1], ps->arr[2], ps->num, ps->ch, ps->d);
}

int main()  // 结构体传参
{
	struct S s = { {1,2,3,4,5}, 100, 'w', 3.14 };

	print1(s);  // 传值
	print2(&s);  // 传址

	return 0;
}