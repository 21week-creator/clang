/*
ex02-03-literal.c

리터럴(literal)
    값이 그 자체로 고정된 상수를 의미

    예)
    정수형 상수 : 10, -10
    실수형 상수 : 2.2, 3.14, -5.1
    문자형 상수 : 'A', 'B', 'c'

심볼릭 상수(const)
    상수에 이름을 붙여준것
    초기 값을 저장하며 변경불가
    프로그랩 흐름을 따라 컴파일됨.

매크로 상수
    심볼릭 상수 일종
    컴파일시 가장먼저 매크로 상수 처리

*/

#include <stdio.h>
#define LENGTH 10       // 매크로 상수  정의에서는 세미콜론이 필요하지 않다.

int main(void)
{
        printf("LENGTH : %d\n", LENGTH);

        int number = 3;         // 일반변수
        const int NUMBER = 5;   // 심볼릭 상수
        number = 10;            // 변수는 값 변경 가능
        // NUMBER = 11;            // 상수는 값을 변경할 수 없다. 변경시 컴파일 에러!
        // LENGTH = 12;



    return 0;
}