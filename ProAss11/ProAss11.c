/* 파일명: ProAss11.c

 * 내용: 연산자와 2개의 피연사자를 인자로 받아와서 사칙연산을 수행하는 calculator 함수를 작성하시오.
 * 이때, 연산자는 문자로 받아오고, 피연산자는 실수로 받아온다. 이 함수를 이용해서 "0 0 0"이 입력될때까지
 * 사칙연산의 결과를 구해서 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.05.15

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
  * 함수명 : calculator()
  * 기능(책임) : 두개의 실수와 연산자를 인자로 받아와서 사칙연산을 수행함.
  * 반환 : 계산된 결과값을 실수형으로 반환함.
  */
float calculator(float num1, char op, float num2)
{
	float result = 0;
	switch (op)
	{
	case '+':
		
		result = num1 + num2;
		return result;

	case '-':
		result = num1 - num2;
		return result;

	case '*':
		result = num1 * num2;
		return result;

	case '/':
		if (num2 == 0)
		{
			printf("0으로 나눌 수 없습니다.\n");
			return 0;
		}
		else
		{
			result = num1 / num2;
			return result;
		}
	default:
		printf("잘못된 연산자입니다.\n");
		return 0;
	}
	

}

 /*
 * 함수명 : solve()
 * 기능(책임) : 두개의 실수와 연산자를 입력받아 calculator 함수를 호출함.
 *
 * 반환 : 없음
 */
void solve()
{
	int run = 0;
	
	char op;
	float num1, num2 = 0;

	while (run == 0)
	{
		printf("수식 (0 0 0입력시 종료)? ");
		scanf("%f %c %f", &num1, &op, &num2);
		if (num1 == 0 && num2 == 0 && op == '0')
		{
			run++;
		}
		else
		{
			printf("%f\n", calculator(num1, op, num2));
			continue;
		}
	}
}


int main()
{
	solve();
	return 0;
}