#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Login{
  char Name[50];
  char Pass[50];
  int ID;
};

int main(int argc, char const *argv[]) {
struct Login Log[5];
int i;

for (size_t i = 0; i < 5; i++) {
  Log[i].ID=10010+10;
  printf("Username\n");
  scanf("%s", &Log[i].Name);
  printf("Password\n");
  scanf("%s", &Log[i].Pass);
  printf("\n\n");
}

for (size_t i = 0; i < 5; i++) {
  printf("Username: %s\n", Log[i].Name);
  printf("Password: %s\n", Log[i].Pass);
  printf("ID: %d\n", Log[i].ID);
}

  return 0;
}
