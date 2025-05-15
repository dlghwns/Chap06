/* 파일명: ProAss01.c

 * 내용:가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는  get_perimeter 함수를 작성하시오.
 * get_perimeter 함수를 이용해서 입력받은 가로, 세로의 길이로 직사각형의 둘레를 구하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.05.15

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : get_perimeter()
 * 기능(책임) : 매개변수 widthm height 를 계산하여 perimeter를 구함.
 *
 * 반환 : perimeter
 */
int get_perimeter(int width, int height)
{
	int perimeter = 0;
	perimeter = (width + height) * 2;
	return perimeter;
}

/*
 * 함수명 : solve()
 * 기능(책임) : 직사각형의 가로와 세로를 입력받아 get_perimeter() 함수를 호출함.
 * 반환 : 없음
 */
void solve()
{
	int width, height = 0;

	printf("가로? ");
	scanf("%d", &width);
	printf("세로? ");
	scanf("%d", &height);
	printf("직사각형의 둘레: %d", get_perimeter(width, height));
}

int main()
{
	solve();
	return 0;
}