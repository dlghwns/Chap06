/* 파일명: ProAss19.c

 * 내용: 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 graph 함수를 작성하시오.
 예를 들어 graph(1200, 100);은 100마다 *을 하나씩 출력하므로 *을 12개 출력하고, 
 graph(1200, 10);은 10마다 *을 하나씩 출력하므로 *을 120개 출력한다.
 0~9999사이의 임의의 숫자 3개를 생성하고 스케일 100으로 그래프를 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜:  2025.05.15
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


 /*
  * 함수명 : graph()
  * 기능(책임) : int형 하나를 입력받아 100으로 나눈 값만큼 *을 출력한다.
  * 반환 : 없음
  */
void graph(int num)
{
	printf("%d:", num);
	for (int i = 0; i < num / 100; i++)
	{
		printf("*");	
	}
	printf("\n");
}

 /*
 * 함수명 : solve()
 * 기능(책임) : 임의의 숫자를 graph 함수에 전달함.
 * 반환 : 없음
 */
int solve()
{
	srand((unsigned int)time(NULL));
	graph(rand() % 10000);
	graph(rand() % 10000);
	graph(rand() % 10000);
}


int main()
{
	solve();
	return 0;
}