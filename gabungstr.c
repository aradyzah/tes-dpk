#include<stdio.h>
#include<string.h>
#define PJG 15

int main(){
    char strl [PJG], str2 [PJG];
    strcpy(strl, "sala");
    strcpy(str2, "tiga");
    strcat(strl, str2);
    printf("strl -> %s  str2 -> %s\n", strl, str2);
}