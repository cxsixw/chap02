/*
���ϸ�: assignment10.c
����: ������ 8����(0), 10����, 16����(0x) �� �ϳ��� �Է¹޾� ���� ��ȯ�Ͽ� ����ϴ� ���α׷�
�ۼ���: ������
��¥: 2025.4.1
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int value;

    printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n");
    printf("����? ");
    scanf("%i", &value);

    printf(" 8����: %#o\n", value);
    printf("10����: %d\n", value);
    printf("16����: %#X\n", value);

    return 0;
}
