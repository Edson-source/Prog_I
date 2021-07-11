#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

int *b, a[15];
int k=0, i, count=0;


printf("Digite um vetor\n");
for (size_t i = 0; i < 15; i++) {
  scanf("%d", &a[i]);
  if (a[i]>0) {
    count++;
  }
}

b= (int*) malloc(count*sizeof(int));

for (size_t i = 0; i < 15; i++) {
  if (a[i]>0) {
    b[k]=a[i];
    k++;
  }
}

for (size_t i = 0; i < k; i++) {
  printf("b[%d]= %d\n", i, b[i]);
}
  return 0;
}
