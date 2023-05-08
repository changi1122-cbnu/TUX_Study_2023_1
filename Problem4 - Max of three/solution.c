#include <stdio.h>

/* Problem 4 : Max of three
 * 세 수를 입력 받아 가장 큰 값을 반환하는 함수 maxOfThree를 작성하세요.
 * 
 * 이 아래에 함수를 작성해봅시다.
 */

int maxOfThree(int n1, int n2, int n3)
{
    if (n1 < n2)
        n1 = n2;
    if (n1 < n3)
        n1 = n3;
    return n1;
}

int main(void)
{
    printf("가장 큰 값은 %d입니다.\n", maxOfThree(1, 2, 3));
    printf("가장 큰 값은 %d입니다.\n", maxOfThree(10, -2, 3));
    printf("가장 큰 값은 %d입니다.\n", maxOfThree(-11, -2, -233));

    return 0;
}