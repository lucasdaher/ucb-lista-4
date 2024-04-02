#include <stdio.h>
#include <conio.h>

float calc(float n1, float n2, float n3, char nota)
{
  int p1 = 2, p2 = 3, p3 = 5;
  float result = 0;

  if (nota == 'A')
  {
    result = (n1 + n2 + n3) / 3;
    return result;
  }
  else if (nota == 'P')
  {
    n1 = (n1 * (float)p1);
    n2 = (n2 * (float)p2);
    n3 = (n3 * (float)p3);
    float total = (n1 + n2 + n3);
    result = total / (float)(p1 + p2 + p3);
    return result;
  }

  return result;
}

int main()
{
  float n1, n2, n3;
  char nota;

  printf("Digite a primeira nota: \n");
  scanf("%f", &n1);

  printf("Digite a segunda nota: \n");
  scanf("%f", &n2);

  printf("Digite a terceira nota: \n");
  scanf("%f", &n3);

  printf("Digite a letra da nota: \n");
  scanf(" %c", &nota);

  printf("Resultado = %.2f", calc(n1, n2, n3, nota));

  getch();
  return 0;
}
