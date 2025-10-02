#include <stdio.h>

void main(){
    int sepatu_a = 400000;
    int sepatu_b = 350000;
    int disc_a = 0.13 * sepatu_a;
    int disk_b = 0.21 * sepatu_b;
    int res_a =sepatu_a - disc_a;
    int res_b = sepatu_b - disk_b;
    
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", res_a);
    printf("Sepatu B mendapat diskon 13%% sehingga harganya menjadi %d\n", res_b);
}