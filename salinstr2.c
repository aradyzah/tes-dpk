#include<stdio.h>
#include<string.h>
#define MAKS 100

int main(){
    char str1 [MAKS];
    char str2 [] = "JINJJAYO";

    strcpy (str1, str2); 
    printf("kata pertama adalah: %s\n", str1);
    printf("kata kedua adalah: %s\n", str2);
}