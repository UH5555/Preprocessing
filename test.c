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

#define MAX 100
#include <stdio.h>
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