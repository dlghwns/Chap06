/* 파일명: ProAss14.c

 * 내용: 연, 월, 일을 인자로 전달받아 유효한 날짜인지 검사하는 check_date 함수를 작성하시오.
 * 인자로 넘겨 받은 날짜가 유효한 날짜면 1을 아니면 0을 리턴한다. 12, 13번에서 작성한 ios_leap_year 함수와
 * get_days_of_month 함수를 이용해도 좋다. check_date 함수를 이용해서 날짜를 입력받는 프로그램을 작성하시오.
 * 사용자가 잘못된 날짜를 입력하면 유효할 날짜를 입력할 때까지 계속해서 다시 입력받도록 처리한다.
 * 작성자: 이호준

 * 날짜: 2025.05.15

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int check_date(int year, int month, int day)
{
	//첫번째 월 체크, 두번째 윤년 체크, 세번째 일 체크

	if(month > 0 && month < 13)
	{

		if ((year % 4 == 0 && year % 100 != 0) || ((year % 400 == 0) == 1))
		{
			//윤년이므로 2월달은 29까지.
			if (month == 2) //2월달 계산.
			{
				if (day <= 29)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}

		}
		else
		{
			//윤년이 아님.
			if (month == 2) //2월달 계산.
			{
				if (day <= 28)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}

		 if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)  //31일까지 있는 달
		 {
			if (day <= 31)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		 }

		else if (month == 4 || month == 6 || month == 9 || month == 11) //30일까지 있는 달
		{
			if (day <= 30)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}

	}
	else 
	{
		return 0; //월 범위 잘못됨.
	}
}


 /*
 * 함수명 : solve()
 * 기능(책임) : 연 월 일을 입력받아 함수를 호출함.
 *
 * 반환 : 없음
 */
void solve()
{
	int year, month, day = 0;
	

	while (1) 
	{
		printf("날짜 (연 월 일)?");
		scanf("%d %d %d", &year, &month, &day);

		int result = check_date(year, month, day);
		if (result == 0)
		{
			printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.\n");
			continue;
		}
		else
		{
			printf("입력한 날짜는 %d년 %d월 %d일 입니다.\n", year, month, day);
			break;
		}
		
	}


}


int main()
{
	solve();
	return 0;
}