/* 파일명: ProAss03.c

 * 내용: 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하시오. 
 distance 함수를 이용해서 입력받은 시작점부터 끝점 사이의 직선거리를 구하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.05.15

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


 /*
  * 함수명 : distance()
  * 기능(책임) : 두 점 사이의 직선 거리를 구하는 함수
  *
  * 반환 : 두 점 사이의 직선 거리 result값.
  */
float distance(float x1, float y1, float x2, float y2)
{
	float result = 0;
	return result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));


}

 /*
 * 함수명 : solve()
 * 기능(책임) : 두 점을 입력받고 distance함수를 호출
 *
 * 반환 : 없음
 */
void solve()
{
	float x1, y1, x2, y2 = 0;

	printf("직선의  시작점 좌표?");
	scanf("%f %f", &x1, &y1);
	printf("직선의  끝점 좌표?");
	scanf("%f %f", &x2, &y2);
	printf("(%.0f, %.0f)~(%.0f, %.0f) 직선의 길이 : %f", x1, y1, x2, y2, distance(x1, y1, x2, y2));
}


int main()
{
	solve();
	return 0;
}