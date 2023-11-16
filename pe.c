#include<stdio.h>
#define maks 350
int main(){
    int i,maksnyah = 0;
    char teks [maks];
    puts("masukkan sebuah paragraf (maksimal 350 karakter).");
    puts("saya akan menghitung karakternya\n");
    fgets(teks, sizeof teks, stdin);
    for (int i = 0; teks [i]; i++)
    maksnyah++;
    printf("\nJumlah karakter (maksimal 350 karakter = %d\n)", maksnyah);
}