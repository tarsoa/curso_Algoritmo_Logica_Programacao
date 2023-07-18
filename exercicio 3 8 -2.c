#include <stdio.h>

int main()
{
  int horas_trabalhadas;
  float valor_hora_aula, percentual_desconto, total_desconto, salario_bruto, salario_liquido;
  
  printf("Digite a quantidade de horas aulas dadas: ");
  scanf("%d", &horas_trabalhadas);
  printf("Digite o valor da hora aula: ");
  scanf("%f", &valor_hora_aula);
  printf("Digite o percentual de desconto: ");
  scanf("%f", &percentual_desconto);
  
  salario_bruto = horas_trabalhadas * valor_hora_aula;
  total_desconto = (percentual_desconto/100) * salario_bruto;
  salario_liquido = salario_bruto - total_desconto;
  
  printf("O valor do salário bruto é de %.2f\n", salario_bruto);
  printf("O valor do salário líquido é de %.2f", salario_liquido);
  
  
    return 0;
}
