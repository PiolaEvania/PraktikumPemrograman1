#include <stdio.h>

int main()
{
    for(int i = 1; i < 4; i++){
        int b, isi;
        scanf("%d", &b);
        int m[b];
        for(int i = 0; i < b; i++){
            scanf("%d", &isi);
            m[i] = isi;
        }
        printf("\n");
        for(int i = 0; i < b; i++){
            printf("%d ", m[i] * (i + 1));
        }
        printf("\n\n");
    }
}
