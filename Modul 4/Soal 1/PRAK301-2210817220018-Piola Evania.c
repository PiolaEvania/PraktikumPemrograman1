#include <stdio.h>

int main()
{
    for (int i=1; i<4; i++){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b){
    printf("%d %d\n\n", b, a);}
    else{
    printf("%d %d\n\n", a, b);}
    }
}
