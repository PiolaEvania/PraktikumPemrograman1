#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d){
    if(a > b && a > c && a > d){
        return a;
    }
    else if(b > a && b > c && b > d){
        return b;
    }
    else if(c > a && c > b && c > d){
        return c;
    }
    else{
        return d;
    }
}

int main(){
    for(int i = 1; i < 4; i++){
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int hasil = MaxBilangan(a, b, c, d);
        printf("%d\n\n", hasil);
    }
    return 0;
}
