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

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int Class83 = 2018;
//	//printf("%d\n", Class83);
//	printf("%d\n", CAT(Class,83));
//	//printf("%d\n", Class##83);
//	//printf("%d\n", Class83);
//
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	//int max = ((a++)>(b++)?(a++):(b++));
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//
//}

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	//�����ڵ��õ�ʱ��
//	//���к������úͷ��صĿ���
//	printf("%d\n", max);
//	max = MAX(a, b);
//	//Ԥ����׶ξ�������滻
//	printf("%d\n", max);
//	return 0;
//}


//����ô���䳤
//���޷�����
//�����������޹أ������Ͻ�
//����ܴ�����������ȼ������⣬���³������
//#define TEST(X,Y) printf("test\n")
//
//int main()
//{
//	TEST();
//	TEST();
//	TEST();
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//int* p = (int*)malloc(10 * sizeof(int));
//	int* p = MALLOC(10, int);
//	return 0;
//}

//#define MAX 100
//
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX
//	printf("%d\n", MAX);
//	return 0;
//}

//#define DEBUG
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG//�������壬�������DEBUG��������printf��
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//#define DEBUG
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//#define DEBUG 0
//
//int main()
//{
////#if defined(DEBUG)
////	printf("hehe\n");
////#endif
//#ifdef DEBUG
//	printf("hehe\n");
//#endif
//#if !defined(DEBUG)
//	printf("hehe\n");
//#endif
//
//#ifndef DEBUG
//	printf("hehe\n");
//#endif
//	return 0;
//}

#include <stdio.h>
#include "add.h"

int main()
{
	int ret = Add(2, 3);
	printf("ret = %d\n", ret);
	return 0;
}