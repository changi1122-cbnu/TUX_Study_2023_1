#include <stdio.h>

/* Problem 3 : Define Abs Function
 * 함수 absolute(int n)는 숫자 n을 입력 받으면 n의 절댓값을 반환하는 함수입니다.
 * 함수 absolute가 잘 작동한다면 main 함수의 출력도 참일 것입니다.
 * 
 * 절댓값 : 실수에서 양 또는 음의 부호를 떼어 버린 수
 * 
 * 이 아래에 함수를 작성해봅시다.
 */





int main(void)
{
    printf("%d의 절댓값은 %d입니다.\n", 3, absolute(3));
    printf("%d의 절댓값은 %d입니다.\n", -16, absolute(-16));
    printf("%d의 절댓값은 %d입니다.\n", 0, absolute(0));

    return 0;
}