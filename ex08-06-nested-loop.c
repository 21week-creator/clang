/* 파일명: ex08-06-nested-loop.c

중첩반복문
    하나의 반복문 안에 다른 반복문이 포함되어 있는 구조를 말한다.
*/


#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < i - 1; j++)
        {

            printf("*");
        }

        printf("\n");

    }
}