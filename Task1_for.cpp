#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (double x = 0; x <= 180; x += 10) {
        double y = sin(x * 3.14159265359 / 180.0);
        printf("x = %.1f, y = %.4f\n", x, y);
    }

    return 0;
}
