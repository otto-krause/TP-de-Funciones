#include <stdio.h>
#include <stdLib.h>

float dah(int dias) {
	return dias * 24.0;
}

float hda(int horas) {
	return horas / 24.0;
}

int main() {
	int cont;
	char sle;
	
	printf("Ingresa la cantidad: ");
	scanf("%d", &cont);
	
	printf("�Quieres convertir a horas (h) o a d�as (d)? ");
	scanf(" %c", &sle);
	
	if (sle == 'h' || sle == 'H') {
		float horas = dah(cont);
		printf("%d d�as son %.2f horas.\n", cont, horas);
	} else if (sle == 'd' || sle == 'D') {
		float dias = hda(cont);
		printf("%d horas son %.2f d�as.\n", cont, dias);
	} else {
		printf("Opci�n no v�lida.\n");
	}
	
	return 0;
}
