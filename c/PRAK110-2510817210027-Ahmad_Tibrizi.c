#include <stdio.h>
#include <math.h>

void main() {
    int alas = 5;
    int tinggi = 12;
    double sisi_miring = sqrt(alas * alas + tinggi * tinggi);
    int keliling = alas + tinggi + (int)sisi_miring;
    int luas = (alas * tinggi) / 2;
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", alas);
    printf("Sisi B = %d cm\n", tinggi);
    printf("Sisi C = %.0f cm\n", sisi_miring);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);
}