/* 파일명: ProAss13.c

 * 내용: 연도와 월을 인자로 전달받아 그 달이 며칠인지 리턴하는 get_days_of_month 함수를 작성하시오.
 * 12번에서 작성한 is_leap_year 함수를 이용해도 된다.
 * get_days_of_month 함수를 이용해서 입력받은 연도의 1월부터 12월까지의 날짜수를 출력하는 프로그램을 작성하시오.
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
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

/*
* 함수명 : get_days_of_month()
* 기능(책임) : 연도를 전달받아 그 달이 며칠까지 있는지 출력..
*
* 반환 : 없음
*/
void get_days_of_month(int year)
{
	if (year < 13)
	{
		printf("연도가 올바르지 않습니다\n");
	}

	if (is_leap_year(year))
	{
		//윤년 : 2월달은 29일까지.
		int month[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		for (int i = 0; i < 12; i++)
		{
			printf("%d월: %d일  ", i + 1, month[i]);
		}

	}
	else
	{
		int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		for (int i = 0; i < 12; i++)
		{
			printf("%d월: %d일  ", i + 1, month[i]);
		}
	}
}

 /*
 * 함수명 : solve()
 * 기능(책임) : 연도를 입력받아 get_days_of_month 함수를 호출함.
 *
 * 반환 : 없음
 */
void solve()
{
	int year = 0;
	printf("연도?");
	scanf("%d", &year);
	printf("[ %d년 ]\n", year);
	get_days_of_month(year);
}


int main()
{
	solve();
	return 0;
}