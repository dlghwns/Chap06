/* 파일명: ProAss08.c

 * 내용: RGB 색상으로부터 red, green, blue 값을 각각 추출하는 get_red, get_green, get_blue 함수를 정의하시오.
 * 이 함수들을 이용해서 입력받은 RGB 색상의 red, green, blue 값을 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.05.15

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



// 비트 연산자 이용하기. & 이용해서 나머지 부분 다 0 으로 만들기.
/*
 * 함수명 : get_red, get_green, get_blue
 * 기능(책임) : RGB 색상으로부터 red, green, blue 값을 각각 추출한다.
 * 반환 : red, green, blue 값
 */
int get_red(int rgb)
{
	int red = (rgb & 0xFF0000) >> 16;
	return red;
}

int get_green(int rgb)
{
	int green = (rgb & 0x00FF00) >> 8;
	return green;
}

int get_blue(int rgb)
{
	int blue = (rgb & 0x0000FF);
	return blue;
}

 /*
 * 함수명 : solve()
 * 기능(책임) : get_red, get_green, get_blue 함수를 호출해준다.
 *
 * 반환 : 없음
 */
void solve()
{
	int rgb = 0;
	printf("RGB 색상?");
	scanf("%x", &rgb);

	get_red(rgb);
	get_green(rgb);
	get_blue(rgb);

	printf("RGB %x의 red: %d, green: %d, blue: %d", rgb, get_red(rgb), get_green(rgb), get_blue(rgb));
}


int main()
{
	solve();
	return 0;
}