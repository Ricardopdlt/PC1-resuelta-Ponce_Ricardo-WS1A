//Ej3 TemaA

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


float Incremento1(float a)//0 maletas
{
	float incremento1 = a;
	return incremento1;
}

float Incremento2(float b)//Entre 1 y 2 maletas
{
	float incremento2 = 1.15*b;
	return incremento2;
}

float Incremento3(float c)//Mas de 2 maletas
{
	float incremento3 = 1.3*c;
	return incremento3;
}

float precioLL = 70.4;//Latam - Lunes a Juves
float precioLV = 100.8;//Latam - Viernes y Sabado
float precioLD = 90.1;//Latam - Domingo

float precioVL = 20.4;//Viva - Lunes a Jueves
float precioVV = 70.6;//Viva - Viernes y Sabado
float precioVD = 80.3;//Viva - Domingo


int main()
{
	//Entrada

	char aerolinea;
	char dia;
	int maletas;
	float precio;
	float costo;

	//Logica

	printf("Ingrese la aerolinea (L: Latam, V: Viva): ");
	cin >> aerolinea;

	printf("Ingrese el dia (L: Lunes a Jueves, V: Viernes y Sabado, D: Domingo): ");
	cin >> dia;

	printf("Ingrese el numero de maletas: ");
	cin >> maletas;

	precio = (aerolinea == 'L' && dia == 'L')*precioLL + (aerolinea == 'L' && dia == 'V')*precioLV + (aerolinea == 'L' && dia == 'D')*precioLD + 
		(aerolinea == 'V' && dia == 'L')*precioVL + (aerolinea == 'V' && dia == 'V')*precioVV + (aerolinea == 'V' && dia == 'D')*precioVD;

	costo = (maletas == 0)*Incremento1(precio) + (maletas >= 1 && maletas <= 2)*Incremento2(precio) + (maletas > 2)*Incremento3(precio);

	cout << "Precio del ticket: " << costo;


	_getch();
}