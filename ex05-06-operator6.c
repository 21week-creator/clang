/* 파일명: ex05-06-operator6.c

8. 삼항 조건 연산자
    조건식 ? 참일 경우 결과 : 거짓일 경우 결과

*/

#include <stdio.h>

int main(void)
{

    printf("삼항 연산자\n");

    int num = -10;

    int absolute = num > 0 ? num : num * -1;

    printf("절대값: %d\n", absolute);

    return 0;
}