#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	1 + 2;  // ��� - 0Ϊ�٣���0Ϊ��
//	;  // �����
//
//	return 0;
//}

//int main()  // ����֧
//{
//	int age = 20;
//	if (age >= 18)
//		printf("����\n");
//
//	return 0;
//}

//int main()  // ˫��֧
//{
//	int age = 10;
//	if (age >= 18)
//		printf("����\n");
//	else
//		printf("δ����\n");
//
//	return 0;
//}

//int main()  // ���֧
//{
//	int age = 25;
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 30)
//		printf("����\n");
//	else if (age >= 30 && age < 50)
//		printf("����\n");
//	else if (age >= 50 && age < 80)
//		printf("����\n");
//	else
//		printf("������\n");
//
//	return 0;
//}

//int main()  // �ж϶��������ʹ���߼������
//{
//	int age = 10;
//	if (18 <= age < 30)  // err
//		printf("����\n");
//
//	return 0;
//}

//int main()  // ���ƶ�����䣬ʹ�ô����{}
//{
//	int age = 10;
//	if (age > 18)
//	{
//		printf("����\n");
//		printf("����̸����\n");
//	}
//
//	return 0;
//}

//int main()  // ����else - �ͽ�ԭ��
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//    else
//        printf("haha\n");
//
//    return 0;
//}

//int main()  // ��������else
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//        {
//            printf("hehe\n");
//        }
//    }
//    else
//    {
//        printf("haha\n");
//    }
//
//    return 0;
//}

//int main()  // ������ǳ���Ҫ��Ҫ�������õı�����
//{
//	int a=10;  // ���Ƽ�
//	int a = 10;
//
//	int i = 0;
//	for(i=0;i<10;i++)  // ���Ƽ�
//	{
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//
//	a(10, 20);  // ���Ƽ�
//	Add(10, 20);
//
//	char firstname[20];  // ���Ƽ�
//	char first_name[20];
//	char FirstName[20];
//	char First_Name[20];  // ���Ƽ�
//
//	return 0;
//}

//int test1()  // ������������x������������y
//{
//	if (0)
//	{
//		return 3;  // return - ����ʹ˽���
//	}
//	return -3;
//}
//int test2()  // �Ƽ�
//{
//	if (0)
//	{
//		return 3;
//	}
//	else
//	{
//		return -3;
//	}
//}
//int main()
//{
//	int ret1 = test1();
//	int ret2 = test2();
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//
//	return 0;
//}

//int main()  // �����ͱ����Ƚ���ȵ�ʱ�򣬳���������ߣ�����һЩ�����ҳ�����
//{
//	int num = 3;
//
//	if (num == 5)
//	{
//		printf("hehe\n");
//	}
//	if (5 == num)  // �Ƽ�
//	{
//		printf("hehe\n");
//	}
//
//	if (num = 5)
//	{
//		printf("hehe\n");
//	}
//	if (5 = num)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()  //  �ж�һ�����Ƿ�Ϊ����
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num % 2 == 1)
//	{
//		printf("%d������\n", num);
//	}
//	else
//	{
//		printf("%d��������\n", num);
//	}
//
//	return 0;
//}

//int main()  // ���1~100֮�������
//{
//	int i = 1;
//	while (i <= 100)  // ��һ
//	{
//		if (i % 2 == 1)  // �ж�i�Ƿ�Ϊ�������������ʹ�ӡ
//			printf("%d ", i);
//		i++;
//	}
//
//	printf("\n");
//
//	i = 1;
//	while (i <= 100)  // ����
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//
//	return 0;
//}

//int main()  // if-else �� switch-case ��ʽ�Ա� 
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	int n = 1;
//	if (1 == day)
//	{
//		printf("����1\n");
//	}
//	else if (2 == day)
//	{
//		printf("����2\n");
//	}
//	else if (3 == day)
//	{
//		printf("����3\n");
//	}
//	else if (4 == day)
//	{
//		printf("����4\n");
//	}
//	else if (5 == day)
//	{
//		printf("����5\n");
//	}
//	else if (6 == day)
//	{
//		printf("����6\n");
//	}
//	else
//	{
//		printf("����7\n");
//	}
//
//	switch (day)  // ���ͱ��ʽ
//	{
//	case 1:  // ���ͳ������ʽ
//		printf("����1\n");
//		break;  // ��switch����У�����û��ֱ��ʵ�ַ�֧������breakʹ�ò���ʵ�������ķ�֧
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//
//	return 0;
//}

//int main()  // default���
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	default:  // ����ȫ�����㣬��ִ��default��䣬���������ᴩcase��ǩһ���ᴩdefault�Ӿ�
//		printf("������������������1-7������\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	}
//	return 0;
//}

//int main()  // ��Ļ��������
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:m++;
//    case 2:n++;
//    case 3:
//        switch (n)  // switch����Ƕ��ʹ��
//        {
//        case 1:n++;
//        case 2:
//            m++; n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}

//int main()  // while���
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()  // continue����������ѭ��continue��ߵĴ��룬ֱ�ӵ�whileѭ�����жϲ���
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()  // break��������ֹѭ��
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()  // getchar��putchar����
//{
//	int ch = 0;
//
//	ch = getchar();  // ��ȡ�ַ�
//	putchar(ch);  // ��ӡ�ַ�
//	//scanf("%c", &ch);
//	//printf("%c\n", ch);
//
//	return 0;
//}

//int main()
//{
//	// getchar��ȡ�ɹ�ʱ�����ػ�ȡ���ַ���ASCII��ֵ������������Ҳ���������ͱ������գ�
//	// getchar��ȡʧ��ʱ������EOF��end of file - �ļ������ı�־��ֵΪ-1��
//	int ch = 0;
//	while ((ch = getchar()) != EOF)  // ����̨����ctrl+z����ȡʧ��
//		putchar(ch);
//	return 0;
//}

//int main()  // ���벢ȷ������ - err
//{
//	int ch = 0;
//	char password[20] = { 0 };
//
//	printf("����������>:");
//	scanf("%s", password);
//
//	printf("��ȷ������(Y/N)>:");
//	ch = getchar();  // ����δȷ���жϣ��Ǵ������
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

//int main()  // ���벢ȷ������ - err
//{
//	int ch = 0;
//	char password[20] = { 0 };
//
//	printf("����������>:");
//	scanf("%s", password);
//
//	getchar();  // ����ȡ�������������ո���ʧ��
//
//	printf("��ȷ������(Y/N)>:");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

//int main()  // ���벢ȷ������
//{
//	int ch = 0;
//	char password[20] = { 0 };
//
//	printf("����������>:");
//	scanf("%s", password);
//
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N)>:");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

int main()  // �����ַ�0~9ʱ��ӡ����Ļ�ϣ����򲻴�ӡ
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
		{
			continue;
		}
		putchar(ch);
	}
	return 0;
}