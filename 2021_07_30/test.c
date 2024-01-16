#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()  // 十进制数字以六进制形式打印
//{
//    int num = 0;
//    int arr[50] = { 0 };
//    int i = 0;
//
//    scanf("%d", &num);  // 输入
//
//    while (num)  // 转换
//    {
//        arr[i] = num % 6;
//        i++;
//        num = num / 6;
//    }
//
//    for (i--; i >= 0; i--)  // 输出
//    {
//        printf("%d", arr[i]);
//    }
//
//    return 0;
//}

//int main()  // 最大公因数与最小公倍数之和
//{
//	    long long n = 0;
//	    long long m = 0;
//
//	    scanf("%d %d", &n, &m);  // 输入
//
//	    long long n2 = n;
//	    long long m2 = m;
//	
//		long long c = 0;  // 1.计算最大公约数
//	    while (c = m2 % n2)
//	    {
//	        m2 = n2;
//	        n2 = c;
//	    }
//	
//	    long long min = m * n / n2;  // 2.计算最小公倍数
//	    printf("%lld", min + n2);
//	
//	    return 0;
//}

//int main()  // 多组输入，判断字母
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//        getchar();  // 处理\n
//    }
//
//    return 0;
//}

//int main()  // 多组输入，打印空心正方形图案
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 1; i <= n; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= n; j++)
//            {
//                if (i == 1 || i == n || j == 1 || j == n)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//void test(int* arr, int sz)  // void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//		//printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(arr, sz);  // 数组传参传过去的是数组首元素的地址
//	return 0;
//}

//void exchange(int a[], int b[], int sz)  // 将数组A中的内容和数组B中的内容进行交换
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//}
//
//int main()
//{
//	int a[] = { 1,3,5,7,9 };
//	int b[] = { 2,4,6,8,0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	exchange(a, b, sz);
//
//	return 0;
//}

//void Init(int* arr, int sz)  // 初始化数组为全0
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(arr + i) = 0;
//	}
//}
//
//void Print(int arr[], int sz)  // 打印数组的每个元素
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)  // 函数完成数组元素的逆置
//{
//	int l = 0;
//	int r = sz - 1;
//
//	while (l < r)
//	{
//		int tmp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = tmp;
//		l++;
//		r--;
//	}
//}
//
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//
//	return 0;
//}

//int main()  // []（下标引用操作符）
//{
//	int arr[] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%p --- %p\n", &arr[i], arr + i);  // arr+i - 就是数组arr中，下标为i的元素的地址
//	}
//
//	// arr[4] --> *(arr+4) --> *(4+arr) --> 4[arr]
//	printf("%d\n", arr[4]);
//	printf("%d\n", 4[arr]);
//
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//
//int main()  // ()（函数调用操作符）
//{
//	test();
//	return 0;
//}

struct Book  // 自定义类型
{
	char name[20];
	float price;
	char id[10];
};

void print1(struct Book b)  // .（访问结构成员）
{
	printf("书名: %s\n", b.name);
	printf("价格: %f\n", b.price);
	printf("书号: %s\n", b.id);
}

void print2(struct Book* pb)  // ->（访问结构成员）
{
	//printf("书名: %s\n", (*pb).name);
	//printf("价格: %f\n", (*pb).price);
	//printf("书号: %s\n", (*pb).id);

	printf("书名: %s\n", pb->name);
	printf("价格: %f\n", pb->price);
	printf("书号: %s\n", pb->id);
}

int main()
{
	struct Book b = { "C语言程序设计", 55.5f, "C20190201" };
	print1(b);  // 结构变量.成员名

	b.price = 100.0f;  // 修改成员变量

	//b.name = "数据结构";  // err
	strcpy(b.name, "数据结构");  // 修改成员变量

	print2(&b);  // 结构体指针->成员名

	return 0;
}