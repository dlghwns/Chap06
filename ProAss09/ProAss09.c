/* 파일명: ProAss09.c

 * 내용: red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 kae_rgb 함수를 정의하시오.
 * 앞에서 정의한 get_red, get_green, get_blue 함수를 함께 이용해서 입력받은 RGB 색상의 보색을 구해서 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜:

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>





 /*
  * 함수명 : get_red, get_green, get_blue
  * 기능(책임) : RGB 색상으로부터 red, green, blue 값을 각각 추출한다.
  * 반환 : red, green, blue 값
  */
int get_red(int rgb)
{
	int red = (rgb & 0xFF0000) >> 16;
	red ^= red;
	return red;
}

int get_green(int rgb)
{
	int green = (rgb & 0x00FF00) >> 8;
	green ^= green;
	return green;
}

int get_blue(int rgb)
{
	int blue = (rgb & 0x0000FF);
	blue ^= blue;
	return blue;
}

 /*
 * 함수명 : solve()
 * 기능(책임) :
 *
 * 반환 : 없음
 */
void solve()
{
	int rgb = 0;
	printf("RGB 색상? ");
	scanf("%d", &rgb);

	int bo_color = get_red(rgb) + get_green(rgb) + get_blue(rgb);
	printf("RGB %d의 보색 : %x", rgb, bo_color);
}


int main()
{
	solve();
	return 0;
}