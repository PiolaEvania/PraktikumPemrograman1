#include<stdio.h>

int main()
{
    for(int x = 1; x < 4; x++){
    int a, b, c, i, j, p, q, r, hasil;
    scanf("%d %d", &a, &b);
    for (i=1; i<=a; i++){
        for(j=i; j>1; j--){
            printf("(%d * %d) + ", j, b);
        }
        for(c=1, hasil=c*b; c<i; c++, hasil+=(c*b)){}
        printf("(%d * %d) = %d\n", j, b, hasil);
    }
    for (p=1, q=1, r = 0; p <= a; q += p + 1, p++){
        r += q * b;
    }
    printf("%d", r);
    printf("\n\n");
    }
}
