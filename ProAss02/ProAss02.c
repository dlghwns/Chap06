/* 파일명: ProAss02.c

 * 내용: 한 변의 길이를 매개변수로 전달받아 정사각형의 넓이를 구하는  get_area_of_square 함수를 작성하시오.
 * get_area_of_square 함수를 이용해서 입력받은 한 변의 길이로 정사각형의 넓이를 구하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.05.15

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
  * 함수명 : get_area_of_square()
  * 기능(책임) : 매개변수 x 를 계산하여 area를 구함.
  *
  * 반환 : 매개변수값의 제곱.
  */
float get_area_of_square(float x)
{
	return x * x;
}

 /*
 * 함수명 : solve()
 * 기능(책임) : 정사각형의 한 변의 길이를 입력받아 get_area_of_square() 함수를 호출함.
 *
 * 반환 : 없음
 */
void solve()
{
	float x = 0.0;
	printf("한 변의 길이? ");
	scanf("%f", &x);
	printf("정사각형의 넓이: %f", get_area_of_square(x));
}


int main()
{
	solve();
	return 0;
}