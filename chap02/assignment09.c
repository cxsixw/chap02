/*
���ϸ�: assignment09.c
����: 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷�
�ۼ���: ������
��¥: 2025.4.1
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int hexValue;

    printf("16���� ����? ");
    scanf("%x", &hexValue);

    printf("16���� %X�� 10������ %d�Դϴ�.\n", hexValue, hexValue);

    return 0;
}
