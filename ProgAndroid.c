#include <stdio.h>
#include <math.h>

int main() {
    int L = 7;
    double R = 1.0/2.0 * L;
    double A = L * L;  // area cuadrado
    double B = (3.0/5.0) * L *(1.0/5.0) * L * 2;  // area brazos
    double C = (1.0/5.0) * L * (1.0/5.0) * L;  // area pies
    double D = (3.1416 * (1.0/2.0) * pow(R,2));  // area semicírculo
    double at = A + B + C + D;
    double pt = (2 * (3.0/5.0) * L) + (2 * (1.0/5.0) * L) + (2 * L) + (3.1416 * L/2) + L;
    printf("Perimetro total: %.4lf\n", pt);
    printf("Area total: %.4lf\n", at);
    return 0;
}

