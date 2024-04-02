#include <stdio.h>
#include <conio.h>

int verifyNumber(int num)
{
  int result;
  if (num < 0)
  {
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}

int main()
{
  int num;

  printf("Digite um numero: \n");
  scanf("%d", &num);

  printf("Resultado = %d", verifyNumber(num));

  getch();
  return 0;
}