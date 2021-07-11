#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int impar(int *a, int n);
int sump(int *a, int n);

int main(){

    int a[10], n, i, count=0, soma=0;

        printf("Digite o tamanho do vetor 'a'\n");
        scanf("%d", &n);

        printf("Digite %d elementos para o vetor 'a'\n", n);
        for(i=0; i < n; i++){
            scanf("%d", &a[i]);
        }

        count= impar(a, n);
        soma= sump(a, n);

        printf("Existem %d elementos impares\n", count);
        printf("A soma dos elementos positivos do vetor eh %d\n", soma);

return 0;
}

int impar(int *a, int n){
int count=0, i;

    for(i=0; i<n; i++){
        if(a[i]%2 != 0){
            count++;
        }
    }
return count;
}

int sump(int *a, int n){
int soma=0, i;

    for(i=0; i<n; i++){
        if(a[i]>0){
            soma= soma+a[i];
        }
    }
return soma;
}
