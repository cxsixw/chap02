/*
���ϸ�: assignment07.c
����: Ŀ�� ������(S, T, G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷�
�ۼ���: ������
��¥: 2025.4.1
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    char size;
    int quantity;

    printf("Ŀ�� ������(S, T, G)�� �ֹ� ����? ");
    scanf(" %c %d", &size, &quantity);

    printf("%c ������ %d���� �ֹ��մϴ�.\n", size, quantity);

    return 0;
}
