#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x = 0;
    while (x <= 180) {
        double y = sin(x);
        printf("x = %.1f, y = %.4f\n", x, y);
        x += 10;
    }
    return 0;
}
