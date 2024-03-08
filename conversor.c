#include <stdio.h>

#define TC_DOLAR_GTQ 7.75    //  Tipo de Cambio: 1 USD = 7.75 GTQ
#define TC_EURO_GTQ 12.25    // Tipo de Cambio: 1 EURO = 12.25 GTQ

int main(){
int opcion;
float cantidad;

printf("Bienvenido al conversor de moneda \n");
printf("1. Convertir de Dolares a Quetzales\n");
printf("2. Convertir de Euros a Quetzales\n");
printf("3. Convertir de Quetzales a Dolares\n");
printf("4. Convertir de Quetzales a Euros\n");
printf("Ingrese su opcion: ");
scanf("%d",&opcion);

switch(opcion){

case 1:
printf("Ingrese la cantidad en Dolares: ");
scanf("%f",&cantidad);
printf("%.2f, USD equivale a %.2f GTQ\n", cantidad, cantidad * TC_DOLAR_GTQ);
break;


case 2:
printf("Ingrese la cantidad en Euros: ");
scanf("%f",&cantidad);
printf("%.2f, EURO equivale a %.2f GTQ\n",cantidad, cantidad * TC_EURO_GTQ);
break;

case 3:
printf("Ingrese la Cantidad en Quetzales: ");
scanf("%f",&cantidad);
printf("%.2f, GTQ equivale a %.2f USD\n", cantidad, cantidad / TC_DOLAR_GTQ);
break;

case 4:
printf("Ingrese la cantidad en Quetzales: ");
scanf("%f",&cantidad);
printf("%.2f, GTQ equivale a %.2f Euro\n", cantidad, cantidad / TC_EURO_GTQ);
break;

default:
printf("Opcion no valida");

}

return 0;

}