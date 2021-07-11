#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count (int *a, int n, int k);

int main(int argc, char const *argv[]) {
  int a[10], i, k, contador, n;

  printf("Digite o tamanho do vetor\n");
  scanf("%d", &n);

  printf("Digite os elementos do vetor 'a'\n");

  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("Digite um numero para verificar se ele esta presente ou nao no vetor 'a'\n");
  scanf("%d", &k);

  contador= count(a, n, k);

  printf("O numero %d aparece %d vezes\n", k, contador);
  return 0;
}

int count(int *a, int n, int k){
  int count=0, i;

  for (i = 0; i < n; i++) {
    if (a[i]==k) {
      count= count+1;
    }
  }
  return count;
}
