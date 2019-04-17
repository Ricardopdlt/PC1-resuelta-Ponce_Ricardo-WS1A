//Ej2 TemaB

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int SB = 900; //sueldo base = SB

float Sueldonuevo1 = SB * 1.1; // De 1 a 5 ventas

float Sueldonuevo2 = SB * 1.15;// Mas de 5 hasta 10 ventas

float Sueldonuevo3 = SB * 1.25;//Mas de 10 ventas

float Incremento1(float a)
{
	float incremento1 = 1.02*a;
	return incremento1;
}

float Incremento2(float b)
{
	float incremento2 = 1.05*b;
	return incremento2;
}

float Incremento3(float c)
{
	float incremento3 = 1.1*c;
	return incremento3;
}

float Incremento4(float d)
{
	float incremento4 = 1.15*d;
	return incremento4;
}


int main()
{
	//Entrada

	int ventas;
	char tienda;
	float sueldo; //sueldo con incremento de ventas
	float sueldoh; //sueldo luego del incremento del local

	//Logica

	printf("Ingrese las ventas del colaborador: ");
	cin >> ventas;

	printf("Ingrese el codigo de la tienda (M: Miraflores, S: Surco, L:Lurin, A: Ancon): ");
	cin >> tienda;

	sueldo = (ventas == 0)*SB + (ventas>=1 && ventas<=5)*Sueldonuevo1 + (ventas>5 && ventas<=10)*Sueldonuevo2 +
		(ventas>10)*Sueldonuevo3;

	sueldoh = (tienda == 'M')*Incremento1(sueldo) + (tienda == 'S')*Incremento2(sueldo) +
		(tienda == 'L')*Incremento3(sueldo) + (tienda == 'A')*Incremento4(sueldo);

	//Salida

	cout << "El sueldo correspondiente es: " << sueldoh;


	_getch();
}