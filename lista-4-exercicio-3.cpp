#include <stdio.h>
#include <conio.h>

int soma(int num, int num2, int num3)
{
  int result = 0;
  if (num < 0)
  {
    printf("O primeiro valor precisa ser positivo.\n");
    return 1;
  }

  for (int i = num2; i <= num3; i++)
  {
    if (i % num == 0)
    {
      result += i;
      printf("Somando %d ao valor de %d\n", i, result);
    }
  }

  return result;
}

int main()
{
  int num, num2, num3;

  printf("Digite um numero: \n");
  scanf("%d", &num);

  printf("Digite um segundo numero: \n");
  scanf("%d", &num2);

  printf("Digite um terceiro numero: \n");
  scanf("%d", &num3);

  printf("Resultado = %d", soma(num, num2, num3));

  getch();
  return 0;
}
