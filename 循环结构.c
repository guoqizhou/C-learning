#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//跳出循环
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
//			continue;//不再执行之后的循环，开始新的循环
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
int main()
{
	int ch = 0;
	//EOF--end of file=-1
	while ((ch = getchar()) != EOF)//ctrl+z时，getchar会获取EOF并跳出循环
	{
		putchar(ch);
	}
	return 0;
}