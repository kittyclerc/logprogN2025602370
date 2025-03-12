#include <stdio.h>
#include <math.h>

int main() {
    int L = 2;
    double at, pt;
    double A1 = L * L;
    double A23 = 2 * ((L * L) / 2);
    double A4 = ((3.0/2.0 * L) * L)/ 2;
    double A5 = ((1.0/4.0 * L) * 2 * L);
    at = A1 + A23 + A4 + A5;
    double C2 = sqrt(pow(L, 2) + pow(L, 2));
    double C4 = sqrt(pow(3.0/2.0*L, 2) + pow(L, 2));
    pt = C2 + C4 + (3.0/2.0 * L) + C2 + L + (1.0/4.0 * L) + 2*L + (1.0/4.0 * L);
    printf("Area total = %.2f\n", at);
    printf("Perimetro total = %.2f\n", pt);
    return 0;
}
