#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//����ѭ��
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//����ִ��֮���ѭ������ʼ�µ�ѭ��
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
int main()
{
	int ch = 0;
	//EOF--end of file=-1
	while ((ch = getchar()) != EOF)//ctrl+zʱ��getchar���ȡEOF������ѭ��
	{
		putchar(ch);
	}
	return 0;
}