#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

int *matPtr;
int i, j, n, m;

  printf("Digite o numero de linhas\n");
  scanf("%d", &n);

  printf("Digite o numero de colunas\n");
  scanf("%d", &m);

  matPtr= (int*) malloc(n*m*sizeof(int));

  printf("Digite os elementos da matriz de tamanha %dx%d\n", n,m);

  for (size_t i = 0; i < n; i++) {
    for (size_t i = 0; j < m; j++) {
      scanf("%d", (matPtr+i*m+j));
    }
  }


return 0;
}
