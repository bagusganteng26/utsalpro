#include <stdio.h>
int main (){
int a, b, c;
printf("Masukkan angka : ");
scanf("%d", &b);

    if(b >= 1){
         c = 1;
            for (a = 1; a <= b; a++)
        {
            c = a * c;
        }
        printf("Hasilnya adalah : %d", c);
    }
    else{
        printf("Angka yang anda masukkan tidak valid");
    }
return 0;
}