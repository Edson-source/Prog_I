#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

int a[100], b[100], c[100];
int i, k=0;
int n, m;

//Lendo vetores A e B
printf("Digite o tamanho do vetor 'a'\n");
scanf("%d", &n);

printf("Digite o vetor 'a' com %d elementos\n", n);
for (size_t i = 0; i < n; i++) {
  scanf("%d", &a[i]);
}

printf("\n\n");

printf("Digite o tamanho do vetor 'b'\n");
scanf("%d", &m);

printf("Digite o vetor 'b' com %d elementos\n", m);
for (size_t i = 0; i < m; i++) {
  scanf("%d", &b[i]);
}

//Atribuição dos pares para C
for (size_t i = 0; i < n; i++) {
  if (a[i]%2==0) {
    c[k]=a[i];
    k++;
  }
}

for (size_t i = 0; i < m; i++) {
  if (b[i]%2==0) {
    c[k]=b[i];
    k++;
  }
}
for (size_t i = 0; i < k; i++) {
  printf("C[%d]= %d\n", i, c[i]);
}
  return 0;
}
