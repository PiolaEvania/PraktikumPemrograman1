#include <stdio.h>

int main()
{
    for(int i = 0; i <= 1; i++){
    float r, t, phi, v, l, k;
    scanf("%f %f", &r, &t);
    phi = 3.142857;
    v = phi*r*r*t;
    l = 2*phi*r*(r+t);
    k = 2*phi*r;

    printf("Volume = %.2f\n", v);
    printf("Luas = %.2f\n", l);
    printf("Keliling = %.2f\n\n", k);
    }
}
