#include <stdio.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b = 10, result = 0;
    printf("���� 1: 10\n");
    for (a = 2; a <= 7; a++) {
        b += (b * 1. / 10);
        result += b;
        printf("���� %d: %.2lf\n", (int)a, result);
    }
}