#include <stdio.h>
#include <conio.h>

float calc(char sexo, float altura)
{
  float pesoIdeal;
  if (sexo == 'H')
  {
    pesoIdeal = 72.7 * altura - 58;
    return pesoIdeal;
  }
  else if (sexo == 'M')
  {
    pesoIdeal = 62.1 * altura - 44.7;
    return pesoIdeal;
  }
  else
  {
    printf("Sexo invalido. Use 'H' para homem e 'M' para mulher.\n");
    return -1; // Erro
  }
  return pesoIdeal;
}

int main()
{
  float altura;
  char sexo;

  printf("Digite o sexo da pessoa: \n");
  printf("M: Mulher\n");
  printf("H: Homem\n\n");
  scanf(" %c", &sexo);

  printf("Digite a altura da pessoa: \n");
  scanf("%f", &altura);

  float result = calc(sexo, altura);
  if (result != -1)
  {
    printf("Resultado = %.2f\n", result);
  }

  getch();
  return 0;
}
