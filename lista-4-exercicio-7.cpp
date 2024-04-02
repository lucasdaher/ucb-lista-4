#include <stdio.h>
#include <conio.h>

float calcular(int n)
{
  float s = 0;
  for (int i = 1; i <= n; i++)
  {
    s += 1.0 / i;
  }
  return s;
}

int main()
{
  int n;
  printf("Digite um valor inteiro e positivo: \n");
  scanf("%d", &n);

  if (n <= 0)
  {
    printf("Voce deve digitar um valor positivo. \n");
    return 1;
  }

  float result = calcular(n);
  printf("Resultado = %.6f.\n", result);

  getch();
  return 0;
}
