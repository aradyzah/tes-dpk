#include<stdio.h>
#define MAKS 30

int main(){
    int i;
    char asal[] = "wilif wilof wilaf";
    char hasil1 [MAKS];

    i = 0;
    while (asal [i] != '\0')
    {
        hasil1 [i] = asal [i];
        i ++;
    }
    hasil1 [i] = '\0';
    printf("isi hasil: %s\n", hasil1);
}