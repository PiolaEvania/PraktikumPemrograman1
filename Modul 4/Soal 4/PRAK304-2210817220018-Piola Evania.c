#include <stdio.h>

int main()
{
    for(int i=1; i<6; i++){
    int a;
    scanf("%d", &a);

        if(a==0){
            printf("Nol\n\n");
        }
        else if(a>0 && a<=9){
            printf("Satuan\n\n");
        }
        else if(a>=11 && a<=19){
            printf("Belasan\n\n");
        }
        else if(a==10 || a>=20 && a<=99){
            printf("Puluhan\n\n");
        }
        else{
            printf("Anda Menginput Melebihi Limit Bilangan\n\n");
        }
    }
}
