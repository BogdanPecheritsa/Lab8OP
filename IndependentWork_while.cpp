#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a = 1, b = 10, result = 0;

    while (a <= 7) {
        b += (b * 0.1);
        result += b;
        printf("Δενό %d: %.2lf\n", (int)a, result);
        a++;
    }

    return 0;
}