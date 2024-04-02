#include <stdio.h>
#include <conio.h>

void format(int segundos)
{
  int hour, minute, seconds, resto;

  hour = segundos / 3600;  // Calcula o tempo em horas
  resto = segundos % 3600; // Calcula o resto que será necessário para o cálculo de minutos
  minute = resto / 60;     // Calcula o tempo em minutos
  seconds = resto % 60;    // Calcula o tempo em segundos

  printf("Resultado = %d horas, %d minutos e %d segundos.\n", hour, minute, seconds);
}

int main()
{
  int seconds;

  printf("Digite o valor em segundos: \n");
  scanf("%d", &seconds);

  format(seconds);

  getch();
  return 0;
}
