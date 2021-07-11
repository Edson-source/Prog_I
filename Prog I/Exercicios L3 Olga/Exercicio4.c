#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int subv(int *a, int *b);
int maxv(int *b);

int main(int argc, char const *argv[]) {
  int a[10], b[5], i, v[10];

  printf("Digite o vetor 'a' de 10 elementos\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  printf("Digite o vetor 'b' de 5 elementos\n");
  for (size_t i = 0; i < 5; i++) {
    scanf("%d", &b[i]);
  }


  for (i = 0; i < 10; i++) {
    v[i]=subv(a, b);
    printf("%d ", a[i]);
  }
  return 0;
}

int subv(int *a, int *b){
int i;

  for (i = 0; i < 10; i++) {
    if (a[i]<0) {
      a[i]= maxv(b);
    }
  }

  return a[i];
}

int maxv(int *b){
int maior, i;

  for (i = 0; i < 5; i++) {
    if (b[i]>maior) {
      maior=b[i];
    }
  }
  return maior;
}
