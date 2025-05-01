/* 파일명: ProAss10.c

 * 내용: 프로그램을 작성하다보면 0~(N-1)범위에 있는 임의의 정수를 생성해야 하는 경우가 자주 있다.
 * 표준 C 라이브러리의  rand 함수를 이용해서 0에서 (N-1)사이에 있는 임의의 정수를 리턴하는 random 함수를 정의하시오.
 * random 함수를 이용해서 0~99 범위에 있는 임의의 정수 10개를 생성하고 그 합계를 구하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜:

 * 버전: v1.0

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
	printf("합계 : %d", re);
}

 /*
 * 함수명 : solve()
 * 기능(책임) :
 *
 * 반환 : 없음
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