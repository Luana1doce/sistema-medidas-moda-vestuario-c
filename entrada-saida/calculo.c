#include <stdio.h>

int main()
{
char vestido_marrom;
float quadril=105.0;
float busto= 90.5;
float cintura= 70.6;
float altura= 1.75;


printf("Altura:\n");
scanf("%f",&altura);



printf("Cintura:\n");
scanf("%f",&cintura);


printf("Quadril:\n");
scanf("%f",&quadril);


printf("Busto:\n");
scanf("%f",&busto);

printf("Altura é: %.2f\n", altura);
    printf("Medida do quadril: %.2f\n", quadril);
    printf("Medida da cintura: %.2f\n", cintura);
    printf("Medida do busto: %.2f\n", busto);

if (altura>= 1.80)
{printf("Vestido Curto");
else printf("O vestido ficará no padrão correto e adequado a sua altura");}

return 0;}
