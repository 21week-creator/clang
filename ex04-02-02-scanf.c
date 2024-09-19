/* 파일명: ex04-02-02-scanf.c
*/
#include <stdio.h>

int main(void)
{
    int num1, num2,num3;
    float fnum1, fnum2, fnum3;

    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("입력된 정수들: %d %d %d\n", num1, num2, num3);


    return 0;
}