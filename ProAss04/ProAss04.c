/* 파일명: ProAss04.c

 * 내용: 제품의 가격과 할인율을 인자로 받아서 할인가를 리턴하는 discount_price 함수를 정의하시오.
 * discount_price 함수를 이용해서 판매되는 제품에 대해서 동일한 할인율을 적용해서 할인가를 구하는 프로그램을 작성하시오.
 * 할인율을 먼저 입력받은 다음, 반복적으로 입력된 제품의 가격에 대해서 할인가를 구해서 출력하며,
 * 제품의 가격으로 0이 입력되면 프로그램을 종료한다.
 * 작성자: 이호준

 * 날짜: 2025.05.15

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 함수명 : get_discount_price()
 * 기능(책임) : 제품의 가격과 할인율을 받아서 할인가를 리턴.
 *
 * 반환 : 총 가격, 즉 할인가
 */
int get_discount_price(int price, int discount)
{
	price = price * (100 - discount) / 100;
	return price;
}

 /*
 * 함수명 : solve()
 * 기능(책임) : 제품의 가격과 할인율을 받아서 discount_price 함수를 호출.
 *
 * 반환 : 없음
 */
void solve()
{
	int run = 0;
	int price = 0;
	int discount = 0;

	while (run == 0)
	{
		printf("할인율(%%)?: ");
		scanf("%d", &discount);

		while (1)
		{
			printf("제품의 가격?: ");
			scanf("%d", &price);
			if (price == 0)
			{
				break;
			}
			int discount_price = get_discount_price(price, discount);
			printf("할인가: %d\n", discount_price);
		}

		run++;
	}
}


int main()
{
	solve();
	return 0;
}