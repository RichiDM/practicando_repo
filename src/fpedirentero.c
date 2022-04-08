/*
 ============================================================================
 Name        : fpedirentero.c
 Author      : ricardo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int FuncionPedirEntero();
int main(void) {

    setbuf(stdout,NULL);
	FuncionPedirEntero();




	return EXIT_SUCCESS;
}
int FuncionPedirEntero()
{
	int numeroIngresado;
	printf("Ingrese un entero:\n");
	scanf("%d",&numeroIngresado);

	printf("numero ingresado es %d:",numeroIngresado);
    return numeroIngresado;

}
