/* 파일명: ProAss18.c

 * 내용: 인자로 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하시오.
   0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 약수를 출력하는 프로그램을 작성하시오
 * 작성자: 이호준

 * 날짜:  2025.05.15
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /*
  * 함수명 : divisors()
  * 기능(책임) : 인자로 전달된 정수의 약수와 개수를 구해서 출력함.
  * 반환 : 없음
  */
void divisors(int num)
{
	int count = 0;

	printf("%d의 약수: ", num);
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("=> 총 %d개\n", count);
}


 /*
 * 함수명 : solve()
 * 기능(책임) :
 * 반환 : 없음
 */
int solve()
{
	// 랜덤한 0~ 999사이의 정수 3개를 생성 num1, num2, num3에 대입.
	// rand() % 1000; : 0~999사이의 랜덤한 정수 생성
	srand((unsigned int)time(NULL)); // 랜덤 시드 초기화
	divisors(rand() % 1000);
	divisors(rand() % 1000);
	divisors(rand() % 1000);


}


int main()
{
	solve();
	return 0;
}