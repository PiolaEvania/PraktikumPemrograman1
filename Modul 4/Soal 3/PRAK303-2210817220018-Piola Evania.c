#include <stdio.h>

int main()
{
    for(int i=1; i<4; i++){
    int N;
    scanf("%d", &N);

        if(N>0){
            printf("positif\n\n");
        }
        else if(N<0){
            printf("negatif\n\n");
        }
        else{
            printf("nol\n\n");
        }
    }
}
