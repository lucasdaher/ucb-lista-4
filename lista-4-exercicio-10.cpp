#include <stdio.h>
#include <conio.h>

int fact(int num)
{
  return (num == 0) ? 1 : (num * fact(num - 1));
}

void fatorial(int input[], int output[])
{
  for (int i = 0; i < 10; i++)
  {
    output[i] = fact(input[i]);
  }
}

void createNewVet(int vet1[], int vet2[])
{
  printf("O segundo vetor gerado foi: \n");
  for (int i = 0; i < 10; i++)
  {
    printf("%i ", vet2[i]);
  }
}

int main()
{
  int input[10], output[10];

  int i;
  for (i = 0; i < 10; i++)
  {
    int num;
    printf("Insira o valor %i da entrada:\n", (i + 1));
    scanf("%i", &num);
    if (num < 1)
    {
      printf("Valor incorreto, tente novamente.\n");
      i--;
    }
    else
      input[i] = num;
  }

  fatorial(input, output);
  createNewVet(input, output);

  getch();
  return 0;
}
