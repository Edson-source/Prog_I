#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct salario {
  char Name[50];
  float Salf;
};

int main(int argc, char const *argv[]) {
  struct salario Fun[15];

  float sal=1000;
  int i, k, Point[15];
  float valor_venda[15], soma_vendas[15], valor_pontos[15], vendas[15];

  for (i = 0; i < 15; i++) {
    printf("Nome do funcionario\n");
    scanf("%s",Fun[i].Name);
    printf("Quantas vendas o funcionario %s teve ?\n", Fun[i].Name);
    scanf("%f", &vendas[i]);

    for (k = 0; k < vendas[i]; k++) {
      printf("Quanto foi o valor de cada venda\n");
      scanf("%f", &valor_venda[k]);
      soma_vendas[i]=soma_vendas[i] + valor_venda[k];
    }

    printf("%.2f\n", soma_vendas[i]);

    Point[i]= soma_vendas[i]/100;

    printf("O total de pontos eh: %d\n", Point[i]);

    Fun[i].Salf= sal+Point[i];
    printf("Salario final do funcionario %s eh %.2f\n", Fun[i].Name, Fun[i].Salf);

    system("PAUSE");
    system("cls");
  }

  return 0;
}
