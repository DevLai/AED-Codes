#include <stdio.h>

int dobro(int a, int b);
int main() {
  int a, b;
  printf("Digite primeiro valor: ");
  scanf("%d", &a);

  printf("Digite segundo valor: ");
  scanf("%d", &b);

  printf("%d", a + b);
}

int dobro(int a, int b) { return 0; }
