#include<stdio.h>
#include<string.h>
int main(){
    char str[]= "ABcde";
    char *hasil1, *hasil2;
    hasil1 = strchr(str, 'B');
    hasil2 = strchr(str, 'X');
    printf("dari string ABcde\n");
    printf("mencari karakter B = %s\n", hasil1);
    printf("mencari karakter X = %s\n", hasil2);
}