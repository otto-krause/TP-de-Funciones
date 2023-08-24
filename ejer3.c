#include <stdio.h>
#include <stdLib.h>

void emot() {
	int num;
	printf("Ingresa un número entero: ");
	scanf("%d", &num);
	
	if (num >= 0 && num <= 127) {
		char simbolo = (char)num;
		printf("El símbolo ASCII correspondiente al número %d es: %c\n", num, simbolo);
	} else {
		printf("El número debe estar en el rango de 0 a 127.\n");
	}
}

int main() {
	emot();
	return 0;
}

