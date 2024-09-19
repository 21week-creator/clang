/* 파일명: ex05-04-operator4.c

6. 시프트 연산자
    << : 지정한 수만큼 비트들을 전부 왼쪽으로 이동시킴(left shift 연산자)
    >> : 부호를 유지하면서 지정한 수만큼 비트를 전부 오른쪽으로 이동시킴(right shift 연산자)
*/

#include <stdio.h>

int main(void)
{

    printf("시프트 연산자\n");
    int x,y;
    x =3;       //0011
    y = x << 2; //1100 => 12
    printf("%d << 2 = %d\n", x, y);

    y = x >> 2;
    printf("%d >> 2 = %d\n", x, y);




    return 0;
}