#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sele(char *num1) {
	char choice;
	printf("¿Desea ver el número completo? (s/n): ");
	scanf(" %c", &choice);
	
	if (choice == 's' || choice == 'S') {
		printf("Número completo es: %s\n", num1);
	} else if (choice == 'n' || choice == 'N') {
		printf("¡Fin del Programa!\n");
	} else {
		printf("Opcion no valida\n");
	}
}

int main() {
	char astk = '*';
	char num[7];
	char num1[7];
	
	printf("Ingrese un número de 6 dígitos: ");
	scanf("%6s", num);
	
	if (strlen(num) != 6) {
		printf("El número ingresado no tiene 6 dígitos.\n");
		return 1;
	}
	strncpy(num1, num, 6);
	for (int i = 0; i < 6; i++) {
		num[i] = astk;
	}
	
	printf("Número ingresado: %s\n", num);
	
	sele(num1);
	
	return 0;
}
