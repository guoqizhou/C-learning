#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
//int main()
//{
//	int x,y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//do while ѭ��
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d\n",i);
//		i++;
//	}
//	while (i < 10);
//	return 0;
//}

//ѭ�������ϰ
//1������n!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		num = num*i;
//	}
//	printf("%d\n", num);
//	return 0;
//}

//����1��+2��+������=sum
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int num = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		num = 1;
//		for (j = 1; j <= i; j++)
//		{
//			num = num*j;
//		}
//		sum = sum + num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//��һ��д��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int num = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//			num = num*i;
//		sum = sum + num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//����������ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("������\n");
//	return 0;
//}

//�ݽ�ʽ��ӡ
int main()
{
	char arr1[] = "have a good sleep";
	char arr2[] = "#################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//��Ϣ1��
		system("cls");//ִ��ϵͳ�����һ����������cls���������Ļ
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}