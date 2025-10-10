#include <stdio.h>

void main() {
    int putaran = 5;
    int jarak_tempuh = 14;
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek %d Kilometer\n\n", jarak_tempuh);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", (float)jarak_tempuh / (putaran * 2 * 3.14));
}