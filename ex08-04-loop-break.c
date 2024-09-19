/* 파일명: ex08-04-loop-break.c

break 문
    반복문에서 break문은 반복문을 즉시 종료하는 명령어!

*/

#include <stdio.h>

int main(void)
{
    int num;
    while(1)
    {
        printf("-1 입력시 종료: ");
        scanf("%d", &num);
        if(num == -1) break;

        printf("%d을(를) 입력하셨네요. \n", num);
    }

    printf("종료합니다.\n");


    return 0;
}