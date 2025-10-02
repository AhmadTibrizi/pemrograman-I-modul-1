#include <stdio.h>

void main(){
    int sisi_a = 4;
    int sisi_b = 5;
    int sisi_c = 7;
    int keliling = sisi_a+sisi_b+sisi_c;
    int harga = 85000;
    int biaya = keliling * harga;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi_a, sisi_b, sisi_c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga Tanah Per Meter adalah %d\n", harga);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : %d\n", biaya);
}