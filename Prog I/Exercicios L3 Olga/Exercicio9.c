#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Aluno{
  char Name[50];
  float Nota1;
  float Nota2;
  int ID;
};

int main(int argc, char const *argv[]) {
struct Aluno Turma[5];
int i;

for (size_t i = 0; i < 3; i++) {
  printf("ID do aluno:\n");
  scanf("%d", &Turma[i].ID);
  printf("Aluno\n");
  scanf("%s", &Turma[i].Name);
  printf("Nota 1\n");
  scanf("%f", &Turma[i].Nota1);
  printf("Nota 2\n");
  scanf("%f", &Turma[i].Nota2);
  printf("\n");
}

for (size_t i = 0; i < 3; i++) {
  printf("Aluno_ID: %d\n", Turma[i].ID);
  printf("Aluno: %s\n", Turma[i].Name);
  printf("Nota 1: %.2f\n", Turma[i].Nota1);
  printf("Nota 2: %.2f\n", Turma[i].Nota2);
  printf("\n\n");
}

  return 0;
}
