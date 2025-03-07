#include <stdio.h>
#include <math.h>

int main() {
    int L = 7;
    double R = (1.0 / 2.0) * 3 * L;  // Radio del semic�rculo
    double A = 3 * L * L;            // �rea del rect�ngulo
    double B = (3.1416 * pow(R, 2)) / 2;  // �rea del semic�rculo
    double at = B + (3 * A);
    double pt = (3.1416 * 3 * L) / 2 + (2 * sqrt(pow(L, 2) + pow(3 * L, 2))) + 7 * L;
    printf("Perimetro total: %.4lf\n", pt);
    printf("Area total: %.4lf\n", at);
    return 0;
}

