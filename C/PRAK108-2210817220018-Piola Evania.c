#include <stdio.h>

int main()
{
    float phi = 3.14;
    float s = 5;
    float t = 14;
    float p = t/s;
    float r = p/(2*phi);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", s);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n", t);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);
    return 0;

}
