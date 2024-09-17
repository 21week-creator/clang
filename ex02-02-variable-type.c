/*
파일명: ex02-02-variable-type.c

C언어 기본 자료형 종류
	- 문자
		char		1byte	-128 ~ +127
	- 정수
		short		2byte	-21,768 ~ +32,767
		int			4byte	-2,147,483,648 ~ 2,147,483,647
		long		4 ~ 8byte (운영체제에 따라 달라짐)
		long long	8byte 이상
	- 실수
		float		4byte	소수점 6~9자리
					(float 자료형은 숫자 뒤에 f를 붙인다)
		double		8byte	소수점 14~17자리
		long double 8byte 이상 double 이상의 표현범위

    sizeof 연산자
        자료형 크기를 계산해서 정수값으로     변환해준다.

*/

#include <stdio.h>

int main(void)
{
	char ch1 = 66, ch2 = 'B';
	short sh1 = 67;

	printf("%c\n", ch1);        //B
	printf("%c\n", ch2);        //B
	printf("%c\n", sh1);        //C

    int in1 = 68;
    printf("%c\n", in1);        //D

    float f = 3.14;
    printf("%f\n", f);
    printf("%d\n", sizeof(f));

    printf("size(100): %d\n", sizeof(100));
    printf("size(3.14): %d\n", sizeof(3.14));

    long ln1 = 2147483649;
    printf("%d\n", ln1);
    printf("%d\n", sizeof(ln1));



	return 0;
}