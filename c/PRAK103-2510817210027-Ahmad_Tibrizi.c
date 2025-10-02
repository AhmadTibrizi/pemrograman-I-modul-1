#include <stdio.h>

void main(){
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;
    float res =a + b;
    res = res * x;
    res = res / y;
    
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f", res);
}