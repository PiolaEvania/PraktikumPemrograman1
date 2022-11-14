#include <stdio.h>

int reverse(int a){
int b, reverse = 0;

    while (a != 0) {
        b = a % 10;
        reverse = reverse * 10 + b;
        a /= 10;
    }
return reverse;
}

int main(){
    for (int i = 1; i < 4; i++){
        int A, B;
        scanf("%d %d", &A, &B);
        A = reverse(A);
        B = reverse(B);
        int C = A + B;
        printf("%d\n\n", reverse(C));
    }
}
