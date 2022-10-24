#include <stdio.h>

int main()
{
    char nm[50], nim[15], kp[2], ttl[50], al[100], hb[100], nhp[15];

    printf("Nama                 :");
    gets(nm);
    printf("NIM                  :");
    gets(nim);
    printf("Kelas Paralel        :");
    gets(kp);
    printf("Tempat/Tanggal Lahir :");
    gets(ttl);
    printf("Alamat               :");
    gets(al);
    printf("Hobby                :");
    gets(hb);
    printf("No. HP               :");
    gets(nhp);

    printf("\nNama                 : %s \n", nm);
    printf("NIM                  : %s \n", nim);
    printf("Kelas Paralel        : %s \n", kp);
    printf("Tempat/Tanggal Lahir : %s \n", ttl);
    printf("Alamat               : %s \n", al);
    printf("Hobby                : %s \n", hb);
    printf("No. HP               : %s ", nhp);
}
