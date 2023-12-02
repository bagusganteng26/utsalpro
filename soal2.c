#include <stdio.h>
int checkPrimeNumber(int a);
int main() {

int a, b;

printf("Masukkan angka positif: ");
scanf("%d",&a);

b = checkPrimeNumber(a);

  if(b == 1)
    printf("%d bukan bilangan prima",a);
  else
    printf("%d bilangan prima",a);

  return 0;
}

int checkPrimeNumber(int a) {

  
  if (a == 0 || a == 1)
    return 1;

  int i;

  for(i=2; i <= a/2; ++i) {
    if(a%i == 0)
      return 1;
  }

  return 0;
}
