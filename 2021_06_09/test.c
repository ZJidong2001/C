#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()  // & - ȡ��ַ������
//{
//    int num = 10;  // ���ڴ�����4���ֽڵĿռ�,������10
//    &num;  // & - ȡ��ַ��������ȡ��num�ĵ�ַ
//    printf("%p\n", &num);  // %p - �Ե�ַ����ʽ��ӡ
//                           // ����������1��byteʱ��ȡ��ַ�õ����ǵ�һ��byte�ĵ�ַ����С�ĵ�ַ��������ĸ��ݴ�����������˳������
//    return 0;
//}

//int main()  // ָ����� - ��ŵ�ַ�ı���
//{
//	int a = 10;
//	int* pa = &a;  // *�������Ǵ����ı�����ָ�������int��������ָ��ָ��Ķ�����int����
//	               // ͨ��pa���ǿ����ҵ�a���������ǿ��Լ򵥵���Ϊpaָ����a
//	return 0;
//}

//int main()  // * - �����ò�����
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;  // * - �����ò�������ͨ��*�����ҵ���ָ����ڴ�ռ�
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

//int main()  // ָ������Ĵ�С - 32λ����ָ�������СͳһΪ4byte��64λ����ָ�������СͳһΪ8byte
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

struct Student  // ѧ���ṹ������
{
	char name[20];
	int age;
	char sex[5];
	char id[12];
};

struct Book  // ��ṹ������
{
	char name[20];
	int price;
	char author[20];
};

int main()
{
	struct Student s1;  // ����ѧ���ṹ�����
	struct Student s2 = { "����",20,"��","20200506" };  // ����ѧ���ṹ���������ʼ��
	struct Book b1 = { "C���Գ������",55,"̷��ǿ" };  // ������ṹ���������ʼ��

	printf("���֣�%s ���䣺%d �Ա�%s ѧ�ţ�%s\n", s2.name, s2.age, s2.sex, s2.id);  // .������ - ��ͨ���ṹ����������ʽṹ�������ĳ�Ա

	struct Book* pb1 = &b1;  // �ýṹ��ָ��洢�ṹ������ĵ�ַ
	printf("������%s �۸�%d ���ߣ�%s\n", (*pb1).name, (*pb1).price, (*pb1).author);
	printf("������%s �۸�%d ���ߣ�%s\n", pb1->name, pb1->price, pb1->author);  // -> - ��ͨ���ṹ��ָ�룩���ʽṹ�������ĳ�Ա

	return 0;
}