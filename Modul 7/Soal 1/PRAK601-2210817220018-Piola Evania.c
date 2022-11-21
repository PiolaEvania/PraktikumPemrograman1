#include <stdio.h>

int main(void)
{
    for(int i = 1; i < 4; i++){
       int b, k, isi;
       scanf("%d %d", &b, &k);
       int m[b][k];
       for(int i = 0; i < b; i++){
        for(int j = 0; j < k; j++){
            scanf("%d", &isi);
            m[i][j] = isi;
        }
       }
       printf("\n");
       for(int i = 0; i < b; i++){
        for(int j = 0; j < k; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
       }
       printf("\n");
    }
}
