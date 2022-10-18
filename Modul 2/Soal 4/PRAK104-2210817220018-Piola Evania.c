#include <stdio.h>

int main()
{
    float SA = 400000;
    float SB = 350000;
    float DSA = 13;
    float DSB = 21;
    float HSA = SA-DSA/100*SA;
    float HSB = SB-DSB/100*SB;
    char D = '%';

    printf("Harga sepatu A adalah %.f\n", SA);
    printf("Harga sepatu B adalah %.f\n", SB);
    printf("Sepatu A mendapat diskon 13%c sehingga harganya menjadi %.f\n", D, HSA);
    printf("Sepatu B mendapat diskon 21%c sehingga harganya menjadi %.f\n", D, HSB);
    return 0;
}
