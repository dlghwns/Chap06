/* 파일명: ProAss07.c

 * 내용: 소수(prime number)는 1과 자기 자신만으로 나누어지는 자연수이다.
 * 인자로 전달받은 정수가 소수인지 검사하는 is_prime 함수를 작성하시오.
 * 이 함수를 이용해서 1에서 N사이의 소수를 구해서 출력하고 모두 몇 개인지 출력하는 프로그램을 작성하시오.
 * N은 사용자로부터 입력받는다.

 * 작성자: 이호준

 * 날짜: 2025.05.15

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
* 함수명 : is_price()
  * 기능 : 전달받은 정수가 소수인지 검사하는 함수
 * 반환 : 소수의 개수
 */

 //for 문 첫번째 : 2부터 n까지 반복해줌.. i사용

//for 문 두번째 : 현재 수와 i 값이 나누어 떨어지는지 검사해줌.. j사용

// i는 2부터 n까지 반복한다.
// j는 1부터 i까지 반복한다. prime라는 정수형 변수 하나 선언 후 0으로 초기화.
// 
int is_prime(int n)
{
	int count = 0;

	//==========================================================
	if (n == 1) {
		printf("1은 소수가 아닙니다.\n");
		return count;
	} 
	else if (n == 2) 
	{
		printf("2\n");
		return ++count;
		
	}
	//==========================================================

	count++; // 2있는거로 시작.
	for (int i = 3; i <= n; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0) // 나누어 떨어지면 소수가 아님
			{
				break;
			}
			else if (j == i - 1) // 나누어 떨어지지 않으면 소수임
			{
				printf("2  %d  ", i);
				count++;
			}
		}
	}

	return count;
}

 /*
 * 함수명 : solve()
 * 기능(책임) : 1에서 N사이의 수를 입력받고 is_prime 함수를 출력해준다.
 *
 * 반환 : 없음
 */
void solve()
{
	int n = 0;
	printf("1~N사이의 소수를 구합니다. N은? ");
	scanf("%d", &n);

	printf("소수는 모두 %d개입니다.", is_prime(n));
}


int main()
{
	solve();
	return 0;
}