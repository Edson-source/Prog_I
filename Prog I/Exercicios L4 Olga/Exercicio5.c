#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

int **matPtr;
int i, j, n, m, maior, posi, posi1;

printf("Digite o numero de linhas\n");
scanf("%d", &m);

printf("Digite o numero de colunas\n");
scanf("%d", &n);

matPtr= (int**) malloc(m*sizeof(int*));

printf("Digite os elementos da matriz de tamanha %dx%d\n", m,n);


for (size_t i = 0; i < m; i++) {

  matPtr[i]= (int*) malloc(n*sizeof(int));

  for (size_t j = 0; j < n; j++) {
    scanf("%d", &matPtr[i][j]);
  }
}
maior=matPtr[0][0];

for (size_t i = 0; i < m; i++) {
  for (size_t j = 0; j < n; j++) {
    if (maior<matPtr[i][j]) {
      maior=matPtr[i][j];
      posi=i;
      posi1=j;
    }
  }
}

printf("Maior elemento\nMatPtr[%d][%d]= %d", posi, posi1, maior);
  return 0;
}
