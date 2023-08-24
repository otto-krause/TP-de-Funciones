#include <stdio.h>
#include <stdLib.h>
#include <string.h>

void nada() {
	char nombre[100], apellido[100];
	
	printf("Ingrese Nombre del Alumno: ");
	fgets(nombre, sizeof(nombre), stdin);
	nombre[strcspn(nombre, "\n")] = '\0';
	
	printf("Ingrese Apellido del Alumno: ");
	fgets(apellido, sizeof(apellido), stdin);
	apellido[strcspn(apellido, "\n")] = '\0'; 
	
	printf("Nombre y Apellido del alumno es: %s %s\n", nombre, apellido);
}

int main() {
	nada();
	
	return 0;
}
	
	
	
