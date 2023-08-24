#include <stdio.h>
#include <stdLib.h>

float medio(int num1, int num2, int num3) {
	float media = (float)(num1 + num2 + num3) / 3;
	return media;
}

int main() {
	int num1, num2, num3;
	printf("Ingresa un número: ");
	scanf("%d", &num1);
	printf("Ingresa otro número: ");
	scanf("%d", &num2);
	printf("Ingresa un tercer número: ");
	scanf("%d", &num3);
	
	float media = medio(num1, num2, num3);
	
	printf("La media de los números %d, %d y %d es: %.2f\n", num1, num2, num3, media);
	
	return 0;
}
