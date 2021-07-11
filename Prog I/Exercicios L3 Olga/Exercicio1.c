#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float minv(float *v, int n);
float sumv(float *v, int n);
float meanv(float *v, int n);

int main(int argc, char const *argv[]) {
  float a[10], b[15], MedA, MedB;
  int n, MinA, SumA, MinB, SumB, i;

printf("Digite o tamanho do vetor 'a'\n");
scanf("%d", &n);

printf("Digite um vetor 'a' de 10 elementos\n");
for (i = 0; i < n; i++) {
  scanf("%f", &a[i]);
}

MinA= minv(a, n);
SumA= sumv(a, n);
MedA= meanv(a, n);

printf("Menor valor do vetor 'a' eh %d\n", MinA);
printf("Soma dos valores do vetor 'a' eh %d\n", SumA);
printf("Media dos valores do vetor 'a' eh %.2f\n", MedA);

system("pause");
system("cls");

printf("Digite o tamanho do vetor 'b'\n");
scanf("%d", &n);

printf("Digite um vetor 'b' de 15 elementos\n");
for (i = 0; i < 15; i++) {
  scanf("%f", &b[i]);
}

MinB= minv(b, n);
SumB= sumv(b, n);
MedB= meanv(b, n);

printf("Menor valor do vetor 'a' eh %d\n", MinB);
printf("Soma dos valores do vetor 'a' eh %d\n", SumB);
printf("Media dos valores do vetor 'a' eh %.2f\n", MedB);

  return 0;
}

float minv(float *v, int n){
int menor, i;

  for (i = 0; i < n; i++) {
      if (v[i]<menor) {
        menor=v[i];
      }
  }
  return menor;
}

float sumv(float *v, int n){
int soma=0, i;

  for (i = 0; i < n; i++) {
    soma= soma + v[i];
  }
  return soma;
}

float meanv(float *v, int n){
float soma=0, media;
int i;

  media= sumv(v, n)/n;

  return media;
}
