#include <stdio.h>

int main() {
    int sisi_a = 4;
    int sisi_b = 5;
    int sisi_c = 7;
    int harga = 85000;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi_a, sisi_b, sisi_c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", sisi_a + sisi_b + sisi_c);
    printf("Harga Tanah Per Meter adalah %d\n", harga);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : %d\n", (sisi_a + sisi_b + sisi_c) * harga);

    return 0;
}