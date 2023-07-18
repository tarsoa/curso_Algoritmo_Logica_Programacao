//https://onlinegdb.com/WUL2Eg7Hc

#include <stdio.h>

int main()
{
   float raio, area_circunferencia;
   
   printf("Digite o valor do Raio: ");
   scanf("%f", &raio);
   
   area_circunferencia = 3.14159 * (raio * raio);
   
   printf("O valor da área da circunferência é de %.4f", area_circunferencia);

    return 0;
}
