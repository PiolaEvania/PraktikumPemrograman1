#include <stdio.h>

int main()
{
    for(int i = 0; i <= 1; i++){
    float A, B, C, K, L;
    scanf("%f %f", &A, &B);
    C = sqrt(B*B-A*A);
    K = A + B + C;
    L = 0.5 * C * A;

    printf("Alas= %.f cm\n", C);
    printf("Tinggi= %.f cm\n", A);
    printf("Keliling= %.f cm\n", K);
    printf("Luas= %.f cm^2\n\n", L);
    }
}
