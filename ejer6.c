#include <stdio.h>
#include <stdLib.h>

int vey(int num, int *absol) {
	if (num >= 0) {
		*absol = num;
		return 0;
	} else {
		*absol = -num;
		return 1;
	}
}

int main() {
	int num, absol, signo;
	printf("Ingresa un número entero: ");
	scanf("%d", &num);
	
	signo = vey(num, &absol);
	
	if (signo == 0) {
		printf("El número %d es positivo y su valor absoluto es %d.\n", num, absol);
	} else {
		printf("El número %d es negativo y su valor absoluto es %d.\n", num, absol);
	}
	
	return 0;
}
