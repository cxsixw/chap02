/*
���ϸ�: assignment02.c
����: �л� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷�
�ۼ���: ������
��¥: 2025.4.1
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int studentNumber;
    double grade;  // double�� ����Ͽ� �� ��Ȯ�� �Ǽ� ǥ��

    printf("�л��� ��ȣ�� �Է��ϼ���: ");
    scanf("%d", &studentNumber);

    printf("�л��� ������ �Է��ϼ���: ");
    scanf("%lf", &grade);  // %lf�� double�� �Ǽ� �Է�

    // ������ 6�ڸ� �Ǽ��� ���
    printf("%d�� �л��� ������ %.6f�Դϴ�.\n", studentNumber, grade);

    return 0;
}
