#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()  // һ�����������ҽ���һ��main����
//{
//	printf("hehe\n");
//	return 0;
//}

//int a = 100;  // ȫ�ֱ���
//
//void test()
//{
//	printf("%d\n", a);  // û�оֲ�����ʱ��ʹ��ȫ�ֱ��� - 100
//}
//
//int main()
//{
//	int a = 10;  // �ֲ�����
//
//	printf("%d\n", a);  // �ֲ����� - 10
//	a = 20;
//	test();
//	printf("%d\n", a);  // �ֲ����� - 20
//
//	return 0;
//}

//int main()
//{
//	int b = 100;
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//		printf("b = %d\n", b);
//
//	}
//	printf("b = %d\n", b);
//	return 0;
//}

//int a = 100;
//
//void test()
//{
//	printf("test: a=%d\n", a);
//}
//
//int main()
//{
//	test();
//	printf("main: a=%d\n", a);
//
//	return 0;
//}

//extern int g_val;  // �����ⲿ����
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()  // ���泣��
//{
//	100;
//	3.14;
//	'a';
//
//	return 0;
//}

//int main()  // const���εĳ����� - �����Ǳ�����ֻ�Ǿ����˳�����
//{
//	int a = 100;  // �ֲ�����
//	a = 200;
//	printf("%d\n", a);
//
//	const int b = 100;
//	b = 200;  // һ���������ܱ��ı����Ǿ�˵���г����� - ���ܱ��ı������
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int arr1[100] = { 0 };  // �������飬[]��Ϊ����
//
//	int m = 100;
//	int arr2[m] = { 0 };  // err��mΪ����
//
//	const int n = 100;
//	int arr3[n] = { 0 };  // err��nֻ�Ǿ����˳����ԣ����ܱ��޸Ķ��ѣ��������Ǳ���
//
//	return 0;
//}

//#define MAX 100  // #define����ı�ʶ������
//
//int main()
//{
//	MAX = 200;  // err��MAXΪ����
//
//	int a = MAX;
//	printf("a = %d\n", a);
//
//	int arr[MAX] = {0};  // MAXΪ��������������������
//
//	return 0;
//}

//enum Sex  // ö������
//{
//	MALE = 3,  //ö�ٳ��� - ö�ٵĿ���ȡֵ
//	FEMALE = 7,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = SECRET;
//
//	printf("%d\n", MALE);  // 3
//	printf("%d\n", FEMALE);  // 7
//	printf("%d\n", SECRET);  // 8
//
//	MALE = 4;  // err��ö�ٳ������ܱ��޸�
//
//	return 0;
//}

//int main()
//{
//	// char - �ַ�����;
//	// C����û���ַ������� - ͨ���ַ��������洢�ַ���
//	// "abcdef"  - �ַ�������ֵ
//
//	char ch[] = "abcdef";
//	printf("%s\n", ch);  // %s - ��ӡ�ַ����ĸ�ʽ
//
//	return 0;
//}

//#include <string.h>
//
//int main()  // strlen��string.h�Ŀ⺯�� - ���ַ������ȣ�\0���ַ����Ľ�����־�����㳤��
//{
//	char ch1[] = "abcdef";
//	printf("%s\n", ch1);
//	printf("%d\n", strlen(ch1));
//
//	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f','\0' };
//	printf("%s\n", ch2);
//	printf("%d\n", strlen(ch2));
//
//	char ch3[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%s\n", ch3);
//	printf("%d\n", strlen(ch3));
//
//	return 0;
//}

//int main()  // ת���ַ�
//{
//	printf("abcd\n");
//	printf("abcdn");
//
//	printf("%s\n", "c:\test\test.c");
//	printf("%s\n", "c:\\test\\test.c");
//	return 0;
//}

//int main()
//{
//	// ����ĸ�ʣ����ϵĸ���Ѳ�������
//	// ??) --> ]
//	// ??( --> [
//
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');  // \'
//
//	printf("%s\n", "\"");  // \"
//	
//	printf("%s\n", "c:\\test\\test.c");  // \\ \t
//
//	printf("%c\n", '\065');  // \ddd - ddd��8��������ת����10���ƺ��ֵ����ΪASCIIֵ������ַ�
//	// 8���Ƶ�065ת����10�����ǣ�53
//
//	printf("%c\n", '\x51');  // \xdd - dd��16��������ת����10���ƺ��ֵ����ΪASCIIֵ������ַ�
//
//	return 0;
//}

//int main()
//{
//	// C++ע�ͷ��
//	int a = 10;	// �������ͱ���a������ֵ10
//
//	/*
//	  C���Ե�ע�ͷ��
//	*/
//	int b = 20;  /* �������ͱ���b������ֵ20 */
//
//	return 0;
//}

//int main()  // ѡ�����
//{
//	int input = 0;
//	printf("�������\n");
//	printf("Ҫ�ú��ô�����(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}

//int main()  // ѭ�����
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		line++;
//		printf("�ô���:%d\n", line);
//	}
//
//	if (line >= 20000)
//		printf("��offer\n");
//
//	return 0;
//}

//int Add(int x, int y)  // ����
//{
//	int sum = 0;
//	sum = x + y;
//	return sum;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d %d", &num1, &num2);  // ����
//
//	sum = Add(num1, num2);  // ��������
//
//	printf("%d\n", sum);  // ���
//
//	return 0;
//}

//int main()  // ����
//{
//	// int a = 1;
//	// int b = 2;
//	// int c = 3;
//	// ...
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int i = 0;
//	while (i < 10)  // ˳���������Ԫ�ز���ӡ
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	printf("\n");
//
//	int j = 9;
//	while (j >= 0)  // �����������Ԫ�ز���ӡ
//	{
//		printf("%d ", arr[j]);
//		j--;
//	}
//
//	return 0;
//}

//int main()  // / - ������ȫΪ����ʱ������̣��������и�����ʱ����Ǿ�ȷС��
//{
//	float a = 5 / 2;
//	float b = 5.0 / 2.0;
//	float c = 5.0 / 2;
//	float d = 5 / 2.0;
//
//	printf("%f\n", a);
//	printf("%f\n", b);
//	printf("%f\n", c);
//	printf("%f\n", d);
//
//	return 0;
//}

//int main()  // % - ��������������Ϊ��������������֮�������������ҲΪ����
//{
//	int a = 7 % 2;  // 3...1
//	printf("%d\n", a);
//
//	return 0;
//}

int main()  // << - �ƶ����Ƕ�����λ
{
	int a = 6;
	// 00000000000000000000000000000110

	int b = a << 1;
	// 00000000000000000000000000001100

	printf("%d\n", a);  // ������b=a+1��a��ֵ����
	printf("%d\n", b);  // 12

	return 0;
}