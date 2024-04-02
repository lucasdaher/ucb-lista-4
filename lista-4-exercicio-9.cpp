#include <stdio.h>
#include <conio.h>

float sequencia(int n)
{
  float result = 0;

  int i;
  for (i = 1; i <= n; i++)
  {
    result += (float)((i * i) + 1) / (float)(i + 3);
  }

  return result;
}

int main()
{
  int n;

  printf("Digite um numero: \n");
  scanf("%d", &n);

  float result = sequencia(n);
  printf("Resultado = %.2f\n", result);

  getch();
  return 0;
}
