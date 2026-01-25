#include <stdio.h>

int main()
{
char vestido_marrom;
float quadril= 105.5;
float busto= 90.5;
float cintura= 70.6;
float altura= 1.75;


printf("Digite suas medidas!");

printf(" Altura:");
scanf ("%f",&altura);

printf("Cintura:");
scanf("%f",&cintura);


printf("Quadril:");
scanf("%f",&quadril);


printf("Busto:");
scanf("%f",&busto);


if (altura>= 1.80)
{printf("Vestido Curto");}
else {printf("Vestido Adequado ao seu tamanho");}




return 0;}