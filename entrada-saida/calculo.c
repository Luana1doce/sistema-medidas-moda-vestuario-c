
#include <stdio.h>
typedef struct vestido {
float altura;
float busto;
float cintura;
float quadril;
float medida_bracos;
float medida_pernas;} vestido;

typedef struct provador
{float altura;
float busto;
float cintura;
float quadril;
float medida_bracos;
float medida_pernas;} provador;



int main(){
//........
vestido lunalice = {1.75,105,98,110.5,30.5};
//........
provador cliente= {0.0,0.0,0.0,0.0,0.0};
//.........
float diferenca;
diferenca= lunalice.altura-cliente.altura;
diferenca= lunalice.busto-cliente.busto;
diferenca= lunalice.cintura-cliente.cintura;
diferenca= lunalice.quadril-cliente.quadril;
diferenca= lunalice.medida_bracos-cliente.medida_bracos;
diferenca= lunalice.medida_pernas-cliente.medida_pernas;


//ÁREA PARA ENTRADA DE DADOS

printf(" Digite suas medidas:\n");
printf(" Busto:\n");
scanf(" %f",&cliente.busto);

printf(" Altura:\n");
scanf(" %f",&cliente.altura);

printf(" Cintura:\n");
scanf(" %f",&cliente.cintura);

printf(" Quadril:\n");
scanf(" %f",&cliente.quadril);

printf(" Digite a medida dos Braços: NÃO OBRIGATÓRIA\n");
scanf(" %f",&cliente.medida_bracos);

//calculos
 if(cliente.altura>lunalice.altura)
{ printf (" O vestido ficará mais curto do que o modelo determinado de fabricação, que é por padrão abaixo do joelho!\n");}
else if (cliente.altura==lunalice.altura)
{printf("O comprimento do vestido ficará perfeito! Como na foto da modelo seguindo o padrão de fabrica.\n");}
else if (diferenca>= 8)
{ printf (" O vestido lhe servirá, porém pode ficar um pouco mais comprido do que convencional\n");}
else { printf("O comprimento do vestido ficará perfeito!\n");}
//.......

if(cliente.busto>lunalice.busto)
{ printf (" Por conta da modelagem este tamanho não lhe servirá. Recomendamos escolher um número maior\n");}
else if (cliente.busto==lunalice.busto)
{printf("O vestido ficará justo no busto. Recomendamos que escolha um tamanho maior\n");}
else if (diferenca>= 7)
{ printf (" O vestido ficará largo no busto\n");}
else { printf("O vestido ficará perfeito no Busto!\n");}

//.......

if(cliente.cintura>lunalice.cintura)
{ printf (" O vestido não lhe servirá na cintura!\n");}
else if (cliente.cintura==lunalice.cintura)
{printf("O vestido ficará muitojusto na cintura. Recomendamos que escolha um tamanho maior, com margem de segurança mais segura.\n");}
else if (diferenca>= 7.5)
{ printf (" O vestido ficará largo na cintura\n");}
else { printf("O vestido também lhe servirá perfeitamente na cintura!\n");}

//...........
if(cliente.quadril>lunalice.quadril)
{ printf ("Ficará apertado no quadril!");}
else if (cliente.quadril==lunalice.quadril)
{printf("O vestido ficará justo no quadril. Recomendamos que escolha um tamanho maior, com margem de segurança mais segura.\n");}
else if (diferenca>= 10)
{ printf (" O vestido ficará largo no quadril\n");}
else { printf("Ficará perfeito no quadril!\n");}

//........
printf ("ATENÇÃO! A medida dos braços não é obrigatória, porém pode contribuir para maior precisão em casos de roupas com manga reta.\n");
if(cliente.medida_bracos>lunalice.medida_bracos)
{ printf ("A manga ficará apertada!\n");}
else if (cliente.medida_bracos==lunalice.medida_bracos)
{printf("O vestido ficará justo na manga. Recomendamos que escolha um tamanho maior, com margem de segurança mais segura.\n");}
else if (diferenca>= 10)
{ printf (" A manga ficará um pouco larga!\n");}
else if (cliente.medida_bracos==0) 
{printf("Medida dos braços não Informada!\n");
printf("MEDIDA NÃO OBRIGATÓRIA!\n");}
else { printf("A manga também lhe servirá perfeitamente!\n");}
//........
return 0; }
