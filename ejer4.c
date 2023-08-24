#include <stdio.h>
#include <stdLib.h>

float medio(int num1, int num2) {
	float media = (float)(num1 + num2) / 2;
	return media;
}

int main() {
	int num1, num2;
	printf("Ingresa un número: ");
	scanf("%d", &num1);
	printf("Ingresa otro número: ");
	scanf("%d", &num2);
	
	float media = medio(num1, num2);
	
	printf("La media de %d y %d es: %.2f\n", num1, num2, media);
	
	return 0;
}
