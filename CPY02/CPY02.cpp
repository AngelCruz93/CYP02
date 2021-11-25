
#include <stdio.h>

int main()
{
	int Tm; //se inserta la variable tamaño
	int Ps; //se inserta la variable de Posicion

	scanf_s("%i", &Tm); //se inserta el tamaño
	scanf_s("%i", &Ps); //se inserta la posicion 

	printf("BM %08x00000000%08X", Tm, Ps); //da elresultado
	return 0;
}