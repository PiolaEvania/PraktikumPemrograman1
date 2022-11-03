#include <stdio.h>

int main()
{
    for(int a = 1; a < 4; a++){
    int a, s;
    scanf("%d %c", &a, &s);

    for(int i = 1; i <= 50; i++){
        if(i % a == 0){
            printf("%c ", s);
        }
        else{
            printf("%d ", i);
        }
    }
    printf("\n\n");
    }
}
