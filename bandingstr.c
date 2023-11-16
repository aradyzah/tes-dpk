#include<stdio.h>
#include<string.h>
int main(){
    char str1 []= "HALO";
    char str2 []= "Halo";
    char str3 []= "HALO";

    printf("hasil pembandingan %s dengan %s --> %d\n", str1, str2, strcmp(str1, str2));
    printf("hasil pembandingan %s dengan %s --> %d\n", str2, str1, strcmp(str2, str1));
    printf("hasil pembandingan %s dengan %s --> %d\n", str1, str3, strcmp(str1, str3));
}