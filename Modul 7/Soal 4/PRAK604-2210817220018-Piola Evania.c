#include <stdio.h>
#include <string.h>

int main(void)
{
    for(int i = 1; i < 4; i++){
        char k1[100], k2[100];
        int isi1, isi2, bintang = 0, pagar = 0;
        scanf("%[^\n]%*c", &k1);
        scanf("%[^\n]%*c", &k2);
        isi1 = strlen(k1);
        isi2 = strlen(k2);
        if(isi1 != isi2){
            printf("Panjang kalimat berbeda, pesan palsu\n");
        }
        else{
            for(int i = 0; i < isi1; i++){
                if(k1[i] == k2[i]){
                    if(k1[i] == ' '){
                        printf(" ");
                    }
                    else{
                        printf("*");
                        bintang++;
                    }
                }
                else{
                    printf("#");
                    pagar++;
                }
            }
            printf("\n\n* = %d", bintang);
            printf("\n# = %d", pagar);
            if(bintang >= pagar){
                printf("\nPesan Asli\n");
            }
            else{
                printf("\nPesan Palsu\n");
            }
        }
        printf("\n\n");
    }
}
