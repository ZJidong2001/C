#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include <string.h>
//
//int main()  // strcpy - string copy - �ַ�������
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

// ģ��ʵ��strcpy ��һ���汾
//void my_strcpy(char* dst, char* src)  // dst��ָ��Ŀ��ռ��ָ�룬src��ָ��Դ�ַ�����ָ��
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

// ģ��ʵ��strcpy �ڶ����汾
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

// ģ��ʵ��strcpy �������汾
//void my_strcpy(char* dst, char* src)
//{
//	while (*dst++ = *src++)  // ����\0 ѭ��ֹͣ
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

#include <assert.h>  // ʹ��assert�������ͷ�ļ�

// ģ��ʵ��strcpy ���ĸ��汾
//void my_strcpy(char* dst, char* src)
//{
//	//if (src == NULL || dst == NULL)  // ���src��dst�����ǿ�ָ��NULL���޷�������н����á������ж��Ƿ�ΪNULL������������
//	//{
//	//	return;
//	//}
//
//	//assert(src != NULL);  // ���� - ���Ǻ��������Ǻ궨�� - release�汾�����Ż��� - ��if����޷��Ż�����
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

// ģ��ʵ��strcpy ������汾
//void my_strcpy(char* dst, const char* src)
//{
//	assert(src && dst);
//
//	while (*dst++ = *src++)  // �����д��*src++ = *dst++���ᵼ���޸�*src��ֵ������bug������Ҫconst���Σ�ʹ����붼�޷�ͨ��
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

// ģ��ʵ��strcpy �������汾
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

//int main()  // constδ����ָ��
//{
//	const int num = 10;  // num�ǳ���������ֵ�����޸�
//	//num = 20;  // err
//
//	int* p = &num;
//	*p = 20;  // num�ǳ��������޷�ֱ���޸���ֵ��������ͨ��ָ���޸�num��ֵ
//
//	return 0;
//}

//int main()  // const����ָ��
//{
//	int num1 = 10;
//	int num2 = 20;
//
//	// const����*����� - ���ε���ָ��ָ������ݣ�*p��
//	// ָ��ָ������ݲ���ͨ��ָ�����ı䣬����ָ����������ǿ��Ըı��
//	const int* p1 = &num1;  // int const* p1 = &num1; - �ȼ�д��
//	*p1 = 20;  // err
//	p1 = &num2;  // ok
//
//	// const����*���ұ� - ���ε���ָ���������p��
//	// ָ������������޸ģ�����ָ��ָ������ݿ����޸�
//	int* const p2 = &num1;
//	*p2 = 20;  // ok
//	p2 = &num2;  // err
//
//	return 0;
//}

// ģ��ʵ��strlen
//size_t my_strlen(const char* str)  // size_t - unsigned int - ��Χ��int��һ��
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
//int main()  // strlen�ķ�������Ϊunsigned int
//{
//	// 10000000000000000000000000000011
//	// 11111111111111111111111111111100
//	// 11111111111111111111111111111101 - ȫ������ֵλ
//
//	if (strlen("abc") - strlen("abcdef") > 0)  // �����޷��������Ҳ�����Ϊ�޷�����
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//size_t count_bit_one(int n)  // ��һ
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
//size_t count_bit_one(unsigned int n)  // ����
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
//size_t count_bit_one(int n)  // �������Ƽ���
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
//int main()  // ͳ�ƶ�������1�ĸ���
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

int main()  // �ж�һ�����ǲ���2�Ĵη���
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