#include <stdio.h>

int main(void)
{
    int input;
    
    scanf("%d", &input);

    /* Problem 2 : GUGUDAN
     * 입력 받은 수 input(1~9)에 대해 (구구단의)input단을 출력해봅시다.
     * 
     * 이 아래에 작성해봅시다.
     */

    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d", input, i, input * i);
    }
    return 0;
}