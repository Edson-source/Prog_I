#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int msum (int *v, int n);
int maxv (int *v, int n);
int minv (int *v, int n);

int main(int argc, char const *argv[]) {
int i, n, a[10], soma;

  printf("Digite o tamanho do vetor 'a'\n");
  scanf("%d", &n);

  printf("Digite os elementos do vetor 'a'\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  soma= msum(a, n);

  printf("A media do maior e menor valor eh %d\n", soma);

  return 0;
}

int msum (int *v, int n){
int soma;

    soma= maxv(v, n) + minv(v, n);

  return soma;
}

int maxv (int *v, int n){
int i, maior;

  for (i = 0; i < n; i++) {
    if (v[i]>maior) {
      maior= v[i];
    }
  }
  return maior;
}

int minv (int *v, int n){
int i, menor;

  for (i = 0; i < n; i++) {
    if (v[i]<menor) {
      menor= v[i];
    }
  }
  return menor;
}
