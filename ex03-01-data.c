/*ex03-01-data.c


데이터 표현방식
    정수표현
        컴퓨터는 2진수로 표현(bit)
        부호비트(Most Significant Bit) + 수치비트
    실수표현(부동소수)
        지수부(e)비트 + 가수부(m)비트

    부동소수점오차
        정확한  실수표현  분가능 근사치값으로 인해 생긴 오차
        부동소수점오차 예외처리 하기!


    실수표현 수식
        ±(1.m) * 2^(e -127)     float(32비트)
        ±(1.m) * 2^(e -1023)    double(32비트)

    예) 0.1 -> 2진수 ->
    


*/

#include <stdio.h>

int main(void)
{
    double num  = 0;

    for(int i = 0; i  < 100; i++)
    {
        num  += 0.1;    // num  = num + 0.1;
    }

    printf("%.20f\n", num); // float 10.00000190734863281250
                            // double 9.99999999999998046007

    return 0;
}