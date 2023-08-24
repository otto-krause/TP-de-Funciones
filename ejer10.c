#include <stdio.h>
#include <stdLib.h>

int producto(int a, int b) {
	if (a < 0 || b < 0) {
		printf("Los números deben ser positivos.\n");
		return -1;
	}
	
	int resultado = 0;
	for (int i = 0; i < b; i++) {
		resultado += a;
	}
	return resultado;
}

int dend(int a, int b) {
	if (a < 0 || b <= 0) {
		printf("El dividendo debe ser positivo y el divisor debe ser mayor a cero.\n");
		return -1;
	}
	
	int cociente = 0;
	while (a >= b) {
		a -= b;
		cociente++;
	}
	return cociente;
}

int main() {
	int a, b;
	printf("Ingresa el primer número: ");
	scanf("%d", &a);
	printf("Ingresa el segundo número: ");
	scanf("%d", &b);
	
	int pr = producto(a, b);
	int dr = dend(a, b);
	
	if (pr != -1) {
		printf("El producto de %d y %d es: %d\n", a, b, pr);
	}
	
	if (dr != -1) {
		printf("La división entera de %d entre %d es: %d\n", a, b, dr);
	}
	
	return 0;
}

