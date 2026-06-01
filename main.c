#include <stdio.h>

int main()
{
   
    float altura, peso, p1, imc;
    
    printf("Digite sua altura\n");
    scanf("%f",&altura);

    printf("Agora seu peso\n");
    scanf("%f", &peso);

    p1=altura*altura;
    imc=peso/p1;

    if (imc<18.5)
    {
    printf("Abaixo do peso\n");
    }
    
    else if (imc<20)
    {
     printf("Peso normal\n");
    }

    else if (imc<30)
    {
        printf("Sobrepeso\n");
    }

    else
    {
        printf("Obesidade\n");
    }

    printf("Seu imc é %f\n", imc);

    return 0;
    }