/*
���ϸ�: assignment11.c
����: ���� ��(3.14159265)�� �Ҽ��� ���� 2, 4, 6, 8�ڸ� �� ���� ǥ��� ����ϴ� ���α׷�
�ۼ���: ������
��¥: 2025.4.1
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    double pi = 3.14159265;

    printf("pi = %.2f\n", pi);
    printf("pi = %.4f\n", pi);
    printf("pi = %.6f\n", pi);
    printf("pi = %.8f\n", pi);
    printf("pi = %.6e\n", pi);

    return 0;
}
