#include <stdio.h>
int fibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Deret Fibonacci: ");

    for (int i = 0; i < n; i++) {
        printf("%d, ", a);
        next = a + b;
        a = b;
        b = next;
    }
}
int main (){
    int n;
    printf("Masukkan angka : ");
    scanf("%d", &n);
    fibonacci (n);
return 0;
}