#include <stdio.h>

int main (){
    int panjang, lebar;
    int luas;
    
    printf("Masukkan panjang : ");
    scanf("%d", &panjang);
    printf("Masukkan lebar : ");
    scanf("%d", &lebar);
    luas = panjang * lebar;
    printf("Hasilnya : %d", luas);

return 0;
}