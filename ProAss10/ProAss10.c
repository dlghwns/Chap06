/* ���ϸ�: ProAss10.c

 * ����: ���α׷��� �ۼ��ϴٺ��� 0~(N-1)������ �ִ� ������ ������ �����ؾ� �ϴ� ��찡 ���� �ִ�.
 * ǥ�� C ���̺귯����  rand �Լ��� �̿��ؼ� 0���� (N-1)���̿� �ִ� ������ ������ �����ϴ� random �Լ��� �����Ͻÿ�.
 * random �Լ��� �̿��ؼ� 0~99 ������ �ִ� ������ ���� 10���� �����ϰ� �� �հ踦 ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥:

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void random(int n)
{
	int re = 0;
	int a = 0;
	for (int i = 1; i <= 10; i++)
	{
		re = printf("%d   ", rand() % 99);
		//a += re;
	}
	printf("�հ� : %d", re);
}

 /*
 * �Լ��� : solve()
 * ���(å��) :
 *
 * ��ȯ : ����
 */
void solve()
{
	random(99);
}


int main()
{
	solve();
	return 0;
}