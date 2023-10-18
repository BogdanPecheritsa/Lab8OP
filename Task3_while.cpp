#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice;
    printf("Оберіть функцію (1 - x?x, 2 - 1 + e^x): ");
    scanf_s("%d", &choice);

    if (choice == 1) {
        double a = 4.0, b = 5.0, h = 1.0;
        double x = a;
        while (x <= b) {
            double result = x * sqrt(x);
            printf("F(%.2f) = %.2f\n", x, result);
            x += h;
        }
    }
    else if (choice == 2) {
        double a = 2.0, b = 4.0, h = 0.2;
        double x = a;
        while (x <= b) {
            double result = 1 + exp(x);
            printf("F(%.2f) = %.2f\n", x, result);
            x += h;
        }
    }
    else {
        printf("Некоректний вибір функції.\n");
    }

    return 0;
}