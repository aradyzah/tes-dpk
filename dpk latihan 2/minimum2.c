#include<stdio.h>
float minimum (float, float);
main () {
    float a, b, kecil;

    printf("masukkan nilai a : ");
    scanf("%f", &a);
    printf("masukkan nilai b : ");
    scanf("%f", &b);

    kecil = minimum(a, b);
    printf("\nBilangan terkecil antara %g dan %g adalah %g\n\n", a, b, kecil);
}

float minimum (float x, float y)
{
    if (x < y)
    return (x);
    else
    return (y);
}