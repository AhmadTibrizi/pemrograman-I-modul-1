#include <stdio.h>

void main() {
    int sepatu_a = 400000;
    int sepatu_b = 350000;
    printf("Harga sepatu A adalah %d\n", sepatu_a);
    printf("Harga sepatu B adalah %d\n", sepatu_b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", (int)(sepatu_a * (1.0 - 0.13)));
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", (int)(sepatu_b * (1.0 - 0.21)));
}