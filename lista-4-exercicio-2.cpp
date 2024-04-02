#include <stdio.h>
#include <conio.h>

int soma(int num, int num2)
{
  int result = num + num2;
  return result;
}

int main()
{
  int num, num2;

  printf("Digite um numero: \n");
  scanf("%d", &num);

  printf("Digite um segundo numero: \n");
  scanf("%d", &num2);

  printf("Resultado = %d", soma(num, num2));

  getch();
  return 0;
}
