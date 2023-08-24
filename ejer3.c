#include <stdio.h>
#include <stdLib.h>

void emot() {
	int num;
	printf("Ingresa un n�mero entero: ");
	scanf("%d", &num);
	
	if (num >= 0 && num <= 127) {
		char simbolo = (char)num;
		printf("El s�mbolo ASCII correspondiente al n�mero %d es: %c\n", num, simbolo);
	} else {
		printf("El n�mero debe estar en el rango de 0 a 127.\n");
	}
}

int main() {
	emot();
	return 0;
}

