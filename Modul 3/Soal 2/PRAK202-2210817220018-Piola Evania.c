#include <stdio.h>

int main ()
{
    for(int i = 0; i <= 1; i++){
    float a, b;
    printf("Masukkan Nilai Pertama:");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua:");
    scanf("%f", &b);
    printf("Hasil dari penjumlahan nilai pertama \"%.2g\" dan nilai kedua \"%.3g\" adalah \"%.2f\"\n\n", a, b, a+b);
    }
}
