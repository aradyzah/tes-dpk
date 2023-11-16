#include<stdio.h>
void bentuk1 (void);
void bentuk2 (void);

int main() {
    //char name [15];
    //printf("masukkan nama: ");
    //scanf("%s", name);
    //printf ("Halo %s\n selamat belajar string!", name);
    bentuk1();
    bentuk2();
}

void bentuk1(void)
    {
        char apayah[] = {'a', 'r', 'a', 'd', 'y', 'z', 'a', 'h', '\0'};
        puts (apayah);
    }

void bentuk2(void)
    {
        char apayah[] = "aradyzah";
        printf("%s", apayah);
    }
