#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  // stdio - ��׼�������

//int main()  // ������ - �������� - ���ҽ���һ��������
//{
//	// �⺯�� - ��ӡ���� - ������� - ��Ҫ����stdio.hͷ�ļ�
//	printf("hello world\n");  // \n - ����
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//
//	return 0;  // ����ĳ���
//}

//int main(void)  // void - ��ȷ�ĸ������ǣ�main��������Ҫ����
//{
// 
//	return 0;
//}

//int main(int argc, char* argv[])  // main������ʵ�ǿ����в�����
//{
//
//	return 0;
//}

//void main()  // ��ʱ��
//{
//
//}

//int main()
//{
//	int age = 10;  // int - ����
//	int price = 50;
//	double weight = 55.5;  // double - ˫���ȸ�����
//
//	return 0;
//}

//int main()  // sizeof - ����һ�����ʹ����ı�����ռ�ռ�Ĵ�С
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

//int main()  // �ַ� - ASCII��
//{
//	// abcdef!@#$���ַ��ڼ�����Զ�������ʽ�洢
//
//	char ch = 'e';
//	printf("%c\n", ch);  // %c - ���ַ���ʽ��ӡ
//	printf("%d\n", ch);  // %d - ��ʮ����������ʽ��ӡ
//
//	return 0;
//}

//int main()  // ����
//{
//	short age = 10;  // age�Ǳ�������ֵ���޸�
//	age = 11;
//	printf("%d\n", age);
//
//	return 0;
//}

//int g = 100;  // ȫ�ֱ���
//
//void test()
//{
//	int b = 1000;  // �ֲ�����
//}
//
//int main()
//{
//	int a = 10;  // �ֲ�����
//
//	return 0;
//}

//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);  // ȫ�ֱ����;ֲ�����ͬ��ʱ���ֲ���������
//	return 0;
//}

int main()  // 2���������
{
	int num1 = 0;
	int num2 = 0;

	scanf("%d%d", &num1, &num2);  // ����

	int sum = num1 + num2;  // ���ӷ�

	printf("%d\n", sum);  // ���

	return 0;
}