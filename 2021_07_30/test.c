#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()  // ʮ������������������ʽ��ӡ
//{
//    int num = 0;
//    int arr[50] = { 0 };
//    int i = 0;
//
//    scanf("%d", &num);  // ����
//
//    while (num)  // ת��
//    {
//        arr[i] = num % 6;
//        i++;
//        num = num / 6;
//    }
//
//    for (i--; i >= 0; i--)  // ���
//    {
//        printf("%d", arr[i]);
//    }
//
//    return 0;
//}

//int main()  // �����������С������֮��
//{
//	    long long n = 0;
//	    long long m = 0;
//
//	    scanf("%d %d", &n, &m);  // ����
//
//	    long long n2 = n;
//	    long long m2 = m;
//	
//		long long c = 0;  // 1.�������Լ��
//	    while (c = m2 % n2)
//	    {
//	        m2 = n2;
//	        n2 = c;
//	    }
//	
//	    long long min = m * n / n2;  // 2.������С������
//	    printf("%lld", min + n2);
//	
//	    return 0;
//}

//int main()  // �������룬�ж���ĸ
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
//        getchar();  // ����\n
//    }
//
//    return 0;
//}

//int main()  // �������룬��ӡ����������ͼ��
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
//	test(arr, sz);  // ���鴫�δ���ȥ����������Ԫ�صĵ�ַ
//	return 0;
//}

//void exchange(int a[], int b[], int sz)  // ������A�е����ݺ�����B�е����ݽ��н���
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

//void Init(int* arr, int sz)  // ��ʼ������Ϊȫ0
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(arr + i) = 0;
//	}
//}
//
//void Print(int arr[], int sz)  // ��ӡ�����ÿ��Ԫ��
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)  // �����������Ԫ�ص�����
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

//int main()  // []���±����ò�������
//{
//	int arr[] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%p --- %p\n", &arr[i], arr + i);  // arr+i - ��������arr�У��±�Ϊi��Ԫ�صĵ�ַ
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
//int main()  // ()���������ò�������
//{
//	test();
//	return 0;
//}

struct Book  // �Զ�������
{
	char name[20];
	float price;
	char id[10];
};

void print1(struct Book b)  // .�����ʽṹ��Ա��
{
	printf("����: %s\n", b.name);
	printf("�۸�: %f\n", b.price);
	printf("���: %s\n", b.id);
}

void print2(struct Book* pb)  // ->�����ʽṹ��Ա��
{
	//printf("����: %s\n", (*pb).name);
	//printf("�۸�: %f\n", (*pb).price);
	//printf("���: %s\n", (*pb).id);

	printf("����: %s\n", pb->name);
	printf("�۸�: %f\n", pb->price);
	printf("���: %s\n", pb->id);
}

int main()
{
	struct Book b = { "C���Գ������", 55.5f, "C20190201" };
	print1(b);  // �ṹ����.��Ա��

	b.price = 100.0f;  // �޸ĳ�Ա����

	//b.name = "���ݽṹ";  // err
	strcpy(b.name, "���ݽṹ");  // �޸ĳ�Ա����

	print2(&b);  // �ṹ��ָ��->��Ա��

	return 0;
}