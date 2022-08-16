#include <stdio.h>
#include <locale>

void calculo(float peso, float altura)
{   float quad=altura*altura;
    float imc = peso/quad;


}


 int main(){
    setlocale(LC_ALL, "Portuguese");
    float imc,altura,peso;
    printf("Digite seu peso (em KG)");
    scanf("%f",&peso);
    printf("\nDigite sua altura (em metros)");
    scanf("%f",&altura);
    calculo(altura,peso);

    if (imc <= 18.5)
        printf("Abaixo do peso");
    else if (imc >=18.6 and imc<=24.9)
        printf("Peso Normal");
    else if (imc >=25.0 and imc<=29.9)
        printf("Sobrepeso/Pré-obesidade");
    else if (imc >=30.0 and imc<=34.9)
        printf("Obesidade Grau I");
    else if (imc >=35.0 and imc<=39.9)
        printf("Obesidade Grau II");
    else 
        printf("Obesidade Grau III");    

            







}