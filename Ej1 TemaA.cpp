// Ej1 Tema A PC1
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

float precioTerreno(float a, float b, float c)
{
	float precioterreno = a * b*c;
	return precioterreno;
}

int main()
{
	float metros;
	float preciodolar;
	float cambio;

	printf("Ingrese el tamaño en metros cuadrados del terreno: ");
	cin >> metros;
	printf("Ingrese el precio de un metro cuadrado en dolares: ");
	cin >> preciodolar;
	printf("Ingrese el tipo de cambio: ");
	cin >> cambio;

	float resultado = precioTerreno(metros, preciodolar, cambio);
	cout << "El precio total de venta en soles del terreno es: " << resultado;

	_getch();

}