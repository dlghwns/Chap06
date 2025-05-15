/* 파일명: ProAss12.c

 * 내용: 윤년인지 검사하는 is_leap_year 함수를 작성하시오.
 * 이 함수를 이용해서 2000년도부터 2100년도 사이에 있는 윤년을 모두 구해서 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.05.15

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
  * 함수명 : is_leap_year()
  * 기능(책임) : 연도를 인자로 전달받아 윤년인지 검사함.
  * 	윤년이면 연도를 출력하고, 아니면 아무것도 하지 않음.
  *
  *
  * 반환 : int : 윤년이면 연도, 아니면 아무것도 하지 않음
  */
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d ", year); // 윤년이면 출력
		return year;
	}
	else
	{
		return;
	}
}

 /*
 * 함수명 : solve()
 * 기능(책임) : 2000부터 2100년까지 하나씩 증가시키면서 is_leap_year 함수를 호출함.
 *
 * 반환 : 없음
 */
void solve()
{
	//2000~2100

	printf("2000~2100사이의 윤년\n");
	for (int i = 2000; i <= 2100; i++)
	{
		is_leap_year(i);
	}

}


int main()
{
	solve();
	return 0;
}