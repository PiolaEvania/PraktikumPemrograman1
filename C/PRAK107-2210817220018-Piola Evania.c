#include <stdio.h>

int main()
{
    int a = 4;
    int b = 5;
    int c = 7;
    int k = a + b + c;
    int i = 85000;
    int j = k * i;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", k);
    printf("Harga tanah Per Meter adalah %d\n", i);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", j);
    return 0;
}
