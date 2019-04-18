//Ej3 TemaB

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


float Incremento1(float a)//1 cama
{
	float incremento1 = a;
	return incremento1;
}

float Incremento2(float b)//Entre 2 y 3 camas
{
	float incremento2 = 1.12*b;
	return incremento2;
}

float Incremento3(float c)//Mas de 3 camas
{
	float incremento3 = 1.25*c;
	return incremento3;
}

float precioML = 20.4;//Mar - Lunes a Juves
float precioMV = 80.8;//Mar - Viernes y Sabado
float precioMD = 70.1;//Mar - Domingo

float precioIL = 15.7;//Interior - Lunes a Jueves
float precioIV = 60.7;//Interior - Viernes y Sabado
float precioID = 65.8;//Interior - Domingo


int main()
{
	//Entrada

	char vista;
	char dia;
	int camas;
	float precio;
	float costo;

	//Logica

	printf("Ingrese la vista (M: Mar, I: Interior): ");
	cin >> vista;

	printf("Ingrese el dia (L: Lunes a Jueves, V: Viernes y Sabado, D: Domingo): ");
	cin >> dia;

	printf("Ingrese el numero de camas: ");
	cin >> camas;

	precio = (vista == 'M' && dia == 'L')*precioML + (vista == 'M' && dia == 'V')*precioMV + (vista == 'M' && dia == 'D')*precioMD +
		(vista == 'I' && dia == 'L')*precioIL + (vista == 'I' && dia == 'V')*precioIV + 
		(vista == 'I' && dia == 'D')*precioID;

	costo = (camas == 1)*Incremento1(precio) + (camas>= 2 && camas <= 3)*Incremento2(precio) + (camas > 3)*Incremento3(precio);

	cout << "Precio del ticket: " << costo;


	_getch();
}