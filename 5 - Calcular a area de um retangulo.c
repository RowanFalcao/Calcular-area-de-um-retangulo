#include<stdio.h>

int main(){
    float altura, largura, multiplicacao;

    printf("Insira a altura do retangulo: ");
    scanf("%f", &altura);

    printf("Insira a largura do retangulo: ");
    scanf("%f", &largura);

    multiplicacao = altura * largura;

    printf("A area do retangulo eh: %.2f\n", multiplicacao);



    return 0;
}
