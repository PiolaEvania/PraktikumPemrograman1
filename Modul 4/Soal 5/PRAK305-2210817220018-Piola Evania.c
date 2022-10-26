#include <stdio.h>

int main()
{
    for(int i=1; i<6; i++){
    int s, sec, mnt, hr, d;
    scanf("%d", &s);
    sec = s%60;
    mnt = (s/60)%60;
    hr = (s/3600)%24;
    d = s/86400;

    if(s<=3600){
        printf("%.2d:%.2d:%.2d\n\n", hr, mnt, sec);
    }
    else if(s>3600 && s<86400){
        printf("%.2d:%.2d:%.2d\n\n", hr, mnt, sec);
    }
    else{
        printf("%d hari %.2d:%.2d:%.2d\n\n", d, hr, mnt, sec);
    }
    }
}
