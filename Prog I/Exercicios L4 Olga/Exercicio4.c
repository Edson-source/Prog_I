#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

int MatA[50][50],MatB[50][50];
int i, j, n, m;

  printf("Digite o numero de linhas\n");
  scanf("%d", &m);

  printf("Digite o numero de colunas\n");
  scanf("%d", &n);

  printf("Digite os elementos da matriz de tamanho %dx%d\n", m,n);

  for (size_t i = 0; i < m; i++) {
    for (size_t j = 0; j < n; j++) {
      scanf("%d", &MatA[i][j]);
      MatB[i][j]=MatA[i][j];
    }
  }

  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < m; j++) {
      printf("%d ", MatB[j][i]);
    }
    printf("\n");
  }



return 0;
}
