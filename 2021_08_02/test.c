#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#define N_VALUES 5
//
//int main()  // ָ��+����
//{
//	float values[N_VALUES];
//	float* vp;
//
//	for (vp = &values[0]; vp < &values[N_VALUES];)  // &values[N_VALUES]ֻ�ǻ�ȡ��ַ����û��Խ����ʡ��һ�ȡ�����еĵ�ַ������������������
//	{
//		*vp++ = 0;  // ++���ȼ���*�ߣ���ע���Ǻ���++�������*vp=0��vp+1
//	}
//
//	return 0;
//}

//int main()  // ָ��-����
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int* p = &arr[9];
//	printf("%p\n", p);
//	printf("%p\n", p - 2);
//
//	return 0;
//}

//int main()  // ָ��-ָ��
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	// ָ��-ָ��õ������ֵľ���ֵ��ָ���ָ��֮��Ԫ�صĸ���
//	printf("%d\n", &arr[9] - &arr[0]);  // 9
//	printf("%d\n", &arr[0] - &arr[9]);  // -9
//	
//	char ch[5] = { 0 };
//
//	// ָ��-ָ���ǰ��������ָ��ָ��ͬһ������
//	printf("%d\n", &arr[9] - &ch[0]);  // err
//
//	return 0;
//}

//int my_strlen(char* s)  // ���ַ������ȷ�һ��������
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
//int my_strlen(char* s)  // ���ַ������ȷ�����ָ��-ָ��
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
//int main()  // ָ��Ĺ�ϵ����
//{
//	float values[N_VALUES];
//	float* vp;
//
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;  // --���ȼ���*�ߣ������vp-1��*vp=0
//	}
//
//	return 0;
//}

//#define N_VALUES 5
//
//int main()  // ����һ�δ������ƣ�����������д����Ϊ��׼������֤������
//{
//	// ��׼�涨��
//	// ����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
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

// ����������Ԫ�صĵ�ַ
// ������2�����⣺
// 1.sizeof������������ �����������������Ԫ�صĵ�ַ�����Ǳ�ʾ�������顣���������������������ռ�ڴ�ռ��С
// 2.&�������������������������Ԫ�صĵ�ַ�����Ǳ�ʾ�������顣�����õ�������������ĵ�ַ

//int main()  // ������
//{
//	int arr[10] = { 0 };
//
//	int* p = &arr[5];  // ȡ���±�Ϊ5��Ԫ�صĵ�ַ
//	int* q = arr;  // ȡ��������Ԫ�صĵ�ַ
//
//	int sz = sizeof(arr);  // ���Ϊ40����������Ĵ�С����������4/8��������Ԫ�ص�ַ����ռ�ڴ�ռ��С��
//	printf("%d\n", sz);
//
//	return 0;
//}

//int main()  // ������
//{
//	int arr[10] = { 0 };
//
//	printf("%p\n", arr);  // ����������Ԫ�صĵ�ַ
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);  // ��һ��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);  // ȡ����������ĵ�ַ
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}

//int main()  // �����ָ��
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

//int main()  // ����ָ��
//{
//	int a = 10;  // ����4byte�ռ�
//
//	int* p = &a;  // p��ָ��
//
//	int** pp = &p;  // pp�Ƕ���ָ��
//	**pp = 20;
//	printf("%d\n", a);
//
//	int*** ppp = &pp;  // ppp������ָ��
//
//	return 0;
//}

//int main()  // ָ������
//{
//	int arr[10];  // �������� - ������͵�����
//	char ch[5];  // �ַ����� - ����ַ�������
//
//	// ָ������ - ���ָ�������
//	int* parr[5];  // ����ָ�������
//	char* pc[6];  // �ַ�ָ�������
//
//	return 0;
//}

//int main()  // ָ������
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//	int* arr[3] = { &a, &b, &c };  // ָ������
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//
//	return 0;
//}

//struct Book  // �ṹ�����͵�����
//{
//	char name[20];  // ��Ա����
//	char author[15];
//	float price;
//};  // û�����ڴ��п��ٿռ�
//
//struct Point
//{
//	int x;
//	int y;
//}p1, p2;  // �������͵�ͬʱ����ȫ�ֱ��� - ��̬��
//struct Point p3;  // ȫ�ֱ���
//
//int main()
//{
//	struct Book b;  // �ֲ����� - ջ��
//	struct Point p;  // �ֲ�����
//
//	return 0;
//}

//int main()  // �ṹ������Ҳ������main�����ﶨ�壬�����ټ�
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

//typedef struct Stu  // �Խṹ�����ͽ��������ض���
//{
//	char name[20];
//	int age;
//	char id[20];
//}Stu;  // Stu�����ͣ����Ǳ�����ע��typedef���޵�����
//
//int main()
//{
//	struct Stu s1;
//	Stu s2;  // �����
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
//int main()  // �ṹ���ʼ��
//{
//	struct Stu s1 = { "����", 20, "2020010506" };
//	Stu s2 = { "����", 30, "2021020506" };
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
//	struct S s;  // ��Ա����Ϊ�ṹ��
//	char name[20];
//	int num;
//};
//
//int main()  // ��Ա����Ϊ�ṹ��Ľṹ���ʼ��
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
//int main()  // �ṹ���Ա����
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

void print1(struct S ss)  // ��ֵ���ã����ٿռ���ʱ�������ռ�����̫��
{
	printf("%d %d %d %d %c %lf\n", ss.arr[0], ss.arr[1], ss.arr[2], ss.num, ss.ch, ss.d);
}

void print2(struct S* ps)  // ��ַ���ã�4/8byte
{
	printf("%d %d %d %d %c %lf\n", ps->arr[0], ps->arr[1], ps->arr[2], ps->num, ps->ch, ps->d);
}

int main()  // �ṹ�崫��
{
	struct S s = { {1,2,3,4,5}, 100, 'w', 3.14 };

	print1(s);  // ��ֵ
	print2(&s);  // ��ַ

	return 0;
}