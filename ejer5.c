#include <stdio.h>
#include <stdLib.h>

float medio(int num1, int num2, int num3) {
	float media = (float)(num1 + num2 + num3) / 3;
	return media;
}

int main() {
	int num1, num2, num3;
	printf("Ingresa un n�mero: ");
	scanf("%d", &num1);
	printf("Ingresa otro n�mero: ");
	scanf("%d", &num2);
	printf("Ingresa un tercer n�mero: ");
	scanf("%d", &num3);
	
	float media = medio(num1, num2, num3);
	
	printf("La media de los n�meros %d, %d y %d es: %.2f\n", num1, num2, num3, media);
	
	return 0;
}
