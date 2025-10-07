#include <stdio.h>

int main() {
    int sepatu_a = 400000;
    int sepatu_b = 350000;
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", (int)(sepatu_a * (1.0 - 0.13)));
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", (int)(sepatu_b * (1.0 - 0.21)));

    return 0; 
}