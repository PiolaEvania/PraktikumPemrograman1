#include <stdio.h>

int main()
{
    int c = 5;
    int a = 12;
    int b = sqrt(a*a+c*c);
    int k = a+b+c;
    int l = 0.5*c*a;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n\n", a);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", a);
    printf("Sisi B = %d cm\n", b);
    printf("Sisi C = %d cm\n", c);
    printf("Keliling = %d cm\n", k);
    printf("Luas = %d cm\n", l);
    return 0;
}
