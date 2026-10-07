#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int p1=0, p2=0, p3=0, p4=0;
	double media;
	printf("Diz o 1º número ");
	scanf_s("%d", &p1);
	printf("Diz o 2º número ");
	scanf_s("%d", &p2);
	printf("Diz o 3º número ");
	scanf_s("%d", &p3);
	printf("Diz o 4º número ");
	scanf_s("%d", &p4);
	media = (p1 + p2 + p3 + p4) / 4;
	printf("A média das tuas notas é:%.2f", media);
	return 0;
}
