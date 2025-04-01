/*
파일명: assignment02.c
내용: 학생 번호와 학점을 입력받아 출력하는 프로그램
작성자: 나현아
날짜: 2025.4.1
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int studentNumber;
    double grade;  // double을 사용하여 더 정확한 실수 표현

    printf("학생의 번호를 입력하세요: ");
    scanf("%d", &studentNumber);

    printf("학생의 학점을 입력하세요: ");
    scanf("%lf", &grade);  // %lf는 double형 실수 입력

    // 학점을 6자리 실수로 출력
    printf("%d번 학생의 학점은 %.6f입니다.\n", studentNumber, grade);

    return 0;
}
