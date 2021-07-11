#include <stdio.h>
#include <stdlib.h>

int soma (int a, int b);

int main(int argc, char const *argv[]) {
  int a, b, c;

    printf("Digite dois valores\n");
    scanf("%d %d", &a, &b);

    c= soma(a, b);

    printf("A soma dos valores %d\n", c);
  return 0;
}

int soma(int a, int b){
  return a+b;
}
