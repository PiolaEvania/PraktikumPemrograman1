#include <stdio.h>

int main()
{
    for(int i = 1; i < 4; i++){
        int b1, b2, isi;
        scanf("%d %d", &b1, &b2);
        int m1[b1], m2[b2];
        if(b1 == b2){
            for(int i = 0; i < b1; i++){
                scanf("%d", &isi);
                m1[i] = isi;
        }
        for(int i = 0; i < b2; i++){
            scanf("%d", &isi);
            m2[i] = isi;
        }
        for(int i = 0; i < b1; i++){
            int hasil = m1[i] * m2[i];
            printf("%d ", hasil);
        }
        }
        else{
            printf("Jumlah Tidak Sama");
        }
        printf("\n\n");
    }
}
