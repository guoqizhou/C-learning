#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//getchar与putchar的使用
//int main()
//{
//	int ret=0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认（Y\\N）:>");
//	while ((ch = getchar()) != '\n')//getchar读取缓冲区中的\n(回车）
//	{
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
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