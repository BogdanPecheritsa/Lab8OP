#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    printf("������ ���������� ����� n: ");
    scanf_s("%d", &n);

    double result = 0.0;
    int sign = 1;

    for (int i = 1; i <= n; i++) {
        result += (double)sign / (2 * i - 1);
        sign = -sign;
    }

    printf("���������: %.4f\n", result);

    return 0;
}