#include<stdio.h>

void tukar (int *px, int *py);

main ()
{
    int a, b;

    a = 88;
    b = 77;

    printf("Nilai sebelum pemanggilan fungsi\n");
    printf("a = %d   b = %d\n");

    tukar(&a, &b);

    printf("\nNilai setelah pemanggilan fungsi\n");
    printf("a = %d   b = %d\n", a, b);
}

void tukar (int *px, int *py)
{
    int z;

    z = *px;
    *px = *py;
    *py = *px;

    printf("\nNilai di akhir fungsi tukar ()\n");
    printf("x = %d   y = %d\n", *px, *py);
}