#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int c = Add(a, b);
//	printf("c=%d\n", c);
//	return 0;
//}

//Ԥ���� - ���� - ���
//Ԥ����(�ı�����)
//1.#include ͷ�ļ��İ���
//2.ע��ɾ�� ʹ�ÿո��滻ע��
//3.#define 

//���� ����C���Դ��뷭��ɻ����룩
//1.�﷨����
//2.�ʷ�����
//3.�������
//4.���Ż��ܣ���������ȫ�ֱ�����

//���  ���ѻ�����ת�����˶�����ָ�
//�γɷ��ű�

//#define MAX 100
//#include <stdio.h>
//Ԥ�������
//int main()
//{
//	/*printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);*/
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d time:%s i =%d\n", __FILE__, __LINE__, __TIME__, i);
//	}
//	fclose(pf);
//
//	return 0;
//}

//#define SQUARE(X) X*X
//
//int main()
//{
//	int ret = SQUARE(5);
//	//int ret = 5 * 5;
//	int ret2 = SQUARE(5 + 1);
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//	return 0;
//}

//#define MAX 100
//#define DOUBLE(X) X+X
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX);
//	//int ret = 10 * 5 + 5;
//	printf("%d\n", ret);
//	return 0;
//}

//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello "  "world\n");
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}

#define CAT(X,Y) X##Y

int main()
{
	int Class83 = 2018;
	//printf("%d\n", Class83);
	printf("%d\n", CAT(Class,83));
	//printf("%d\n", Class##83);
	//printf("%d\n", Class83);

	return 0;
}