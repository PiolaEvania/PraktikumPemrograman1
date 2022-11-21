#include <stdio.h>

int main(void)
{
    for(int i = 1; i < 3; i++){
        int b, isi, total = 0, hasil[10][10];
        scanf("%d", &b);
        int m1[b][b], m2[b][b];
        printf("\nMatriks A\n");
        for(int i = 0; i < b; i++){
            for(int j = 0; j < b; j++){
                scanf("%d", &isi);
                m1[i][j] = isi;
            }
        }
        printf("\nMatriks B\n");
         for(int i = 0; i < b; i++){
            for(int j = 0; j < b; j++){
                scanf("%d", &isi);
                m2[i][j] = isi;
            }
        }
         for(int i = 0; i < b; i++){
            for(int j = 0; j < b; j++){
                for(int k = 0; k < b; k++){
                    total += m1[i][k] * m2[k][j];
                }
                hasil[i][j] = total;
                total = 0;
            }
         }
        printf("\nMatriks AXB\n");
        for(int i = 0; i < b; i++){
            for(int j = 0; j < b; j++){
                    printf("%d ", hasil[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
}
