#include <stdio.h>
#include <conio.h>

float increase(float oldValue, float newValue)
{
  float diff = newValue - oldValue;
  float result = (diff / oldValue) * 100;
  return result;
}

int main()
{
  float oldValue, newValue;

  printf("Digite o valor antigo: \n");
  scanf("%f", &oldValue);

  printf("Digite o novo valor: \n");
  scanf("%f", &newValue);

  char percent = '%';
  printf("Resultado = %.1f%c", increase(oldValue, newValue), percent);

  getch();
  return 0;
}
