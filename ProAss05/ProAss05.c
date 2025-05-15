/* 파일명: ProAss05.c

 * 내용: 인자로 전달받은 정수가 짝수인지 검사하는 is_even() 함수와 홀수인지 검사하는 is_odd() 함수를 작성하시오.
 * 두 함수를 이용해서 0이 입력 될 때까지 입력된 정수들에 대해서 짝수와 홀수의 개수를 구해서 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025.05.15

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



 /*
  * 함수명 : is_even()
  * 기능 : 정수가 짝수이면 1, 아니면 0 반환
  */
int is_even(int num)
{
    return num % 2 == 0;
}

/*
 * 함수명 : is_odd()
 * 기능 : 정수가 홀수이면 1, 아니면 0 반환
 */
int is_odd(int num)
{
    return num % 2 != 0;
}

/*
 * 함수명 : solve()
 * 기능 : 입력받은 정수들에 대해 짝수/홀수 개수 계산
 */
void solve()
{
    int num;
    int even = 0;
    int odd = 0;

    printf("정수를 한 줄에 입력하세요 (0 입력 시 종료):\n");

    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
            break;

        if (is_even(num))
            even++;
        else if (is_odd(num))
            odd++;
    }

    printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.\n", even, odd);
}

int main()
{
    solve();
    return 0;
}