#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//getchar��putchar��ʹ��
//int main()
//{
//	int ret=0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ�ϣ�Y\\N��:>");
//	while ((ch = getchar()) != '\n')//getchar��ȡ�������е�\n(�س���
//	{
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}