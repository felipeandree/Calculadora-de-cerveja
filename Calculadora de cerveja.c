#include <stdio.h>
#include <stdlib.h>

  int main(void)
  
{
    printf("Calculadora de cerveja\n");
    printf("Nome: Rocket Labs\n");
    char nome;
    float preco,ml, calculo; 

    printf("Digite o nome da cerveja escolhida: ");
    scanf("%s",&nome);     

    printf("Digite o preco da cerveja: ");
    scanf("%f",&preco);

    printf("Digite a quantidade em ml: ");
    scanf("%f",&ml);

        calculo=(preco/ml); 

    printf("Preço da cerveja informado: R$ %0.2f\n",preco);
    printf("O seu próximo preco será aproximadamente: R$ %f", calculo);

    return 0;
}