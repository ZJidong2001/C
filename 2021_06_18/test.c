#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()  // whileѭ��
//{
//	int i = 1;  // 1.��ʼ��
//
//	while (i <= 10)  // 2.�ж�
//	{
//		printf("%d ", i);
//
//		i++;  // 3.����
//	}
//
//	return 0;
//}

//int main()  // forѭ��
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)  // ��ʼ�����жϡ�������һ����ʾ
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()  // forѭ��break
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()  // forѭ��continue
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)  // �����ڴ洢����
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)  // ��ӡ����������
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()  // ʡ��forѭ���ĳ�ʼ�����жϣ�������������
//{
//	// 1. �������־�����ʡ�ԣ���������Ҫʡ��
//	// 2. �жϲ���ֻҪʡ���ˣ�����ζ���жϺ�Ϊ���桱
//	for (;;)  // ��ѭ��
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()  // ʡ���׳�bug
//{
//	int i = 0;
//	int j = 0;
//
//	for (; i < 10; i++)  // ��ӡ10��hehe��������100��hehe
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//int main()  // do...whileѭ��
//{
//	int i = 1;
//
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()  // do...whileѭ��continue
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()  // do...whileѭ��break
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()  // ����n�Ľ׳�
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()  // ����1!+2!+3!+����+10!
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

//int main()  // ���������������
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;  // Ҫ���ҵ�����
//	int sz = sizeof(arr) / sizeof(arr[0]);  // �������Ԫ�ظ���
//
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}

//int main()  // ����������ֲ�������
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 7;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}

//#include <windows.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()  // ��̬��ӡ
//{
//	char arr1[] = "hello world!!!!!!!";
//	char arr2[] = "##################";
//	int len = strlen(arr1);
//
//	int left = 0;
//	int right = len - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);  // 1000���� - 1��
//		system("cls");  // system�ǿ⺯��������ִ��ϵͳ�����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()  // ��֤����
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//
//		if (strcmp(password, "abcdef") == 0)  // ����������abcdef�������ַ����Ƚϣ�����ʹ��==
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������������˳�����\n");
//	}
//
//	return 0;
//}

//void test()
//{
//again:
//	// goto��䲻�ܿ纯��ʹ��
//}
//int main()
//{
//again:
//
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}

#include <string.h>
#include <stdlib.h>

//int main()  // �ػ�����goto���
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

int main()  // �ػ�����ѭ�����
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");

	while (1)
	{
		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}