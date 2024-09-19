/* 파일명: ex05-03-operator3.c

5. 비트 단위 연산자
    & : 대응이 되는 비트가 모두 1이면 1반환(비트 AND 연산자)
    | : 대응이 되는 비트 중에서 하나라도 1이면 1반환 (비트 OR 연산자)
    ^ : 대응이 되는 비트가 서로 다르면 1반환 (비트 XOR 연산자)
    ~ : 비트가 1이면 0으로, 0이면 1로 반전시킴 (비트 NOT 연산자)
    */

#include <stdio.h>

int main(void)
{
    printf("비트 연산자\n");

    int a = 3;
    int b  =5;

    printf("3 & 5 = %d\n", a & b);
    printf("3 | 5 = %d\n", a | b);
    printf("3 ^ 5 = %d\n", a ^ b);
    printf("~3 = %d\n", ~a);

    printf("\n");

    return 0;
}