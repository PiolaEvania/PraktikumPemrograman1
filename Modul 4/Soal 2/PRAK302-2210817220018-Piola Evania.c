#include <stdio.h>

int main()
{
    for(int i=1; i<6; i++){
    int n;
    scanf("%d", &n);

        if(n>=80){
            printf("A\n\n");
        }
        else if(n>=70 && n<=79){
            printf("B\n\n");
        }
        else if(n>=60 && n<=69){
            printf("C\n\n");
        }
        else if(n>=50 && n<=59){
            printf("D\n\n");
        }
        else{
            printf("E\n\n");
        }
    }
}
