#include <stdio.h>
#include <math.h>

int main() {
    int L = 12.0, precio;
    float baseT, ht, at, ar, Atotal, iva, preiva, prtotal;
    //triángulo
    baseT = 1.0/2 * L;
    ht = (sqrt(pow(L,2)-pow(baseT,2)));
    at = baseT*ht/2;
    //romboide
    ar = L * ht/2;
    Atotal = at + ar;

    //calculos dinero
    precio = 9256.00;
    iva = 0.16;
    prtotal = precio * Atotal+(precio*Atotal*iva);
    printf("Area total: %f\n", Atotal);
    printf("Precio total: %f\n", prtotal);
    return 0;
}
