#include <stdio.h>

int main()
{
    for(int a = 1; a < 4; a++){
    int a;
    scanf("%d", &a);

    for(int i = 1; i<= a; i++){
        if(i % 2 == 1){
            printf("%d ", i);
        }
    }
    printf("\n");
    for(int j = a; j >= 1; j--){
        if(j % 2 == 0){
            printf("%d ", j);
        }
    }
    printf("\n\n");
    }
}
