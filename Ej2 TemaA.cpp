//Ej2 TemaA

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace System;
using namespace std;

int main()
{
	//Entrada

	long long num;
	int diah, mesh, a�oh;//dia, mes y a�o del dia actual
	int dia, mes, a�o; // dia, mes y a�o en que empezo a funcionar la empresa
	char frase[4];
	int lim; //�se origino el CUC en lima? S� o no
	int emp; //empresa grande?
	int op; //a�os que la empresa lleva operando




	//Logica

	cout << "Ingrese el Codigo Unico del Contribuyente (CUC)-(12 digitos): ";
	cin >> num; cin >> frase;

	cout << "Ingrese la fecha del dia de hoy: ";
	cin >> diah;
	cin >> mesh;
	cin >> a�oh;


	printf("Dia de alta: ");
	dia = (num % 100);
	cout << dia << endl;//salida

	printf("Mes de alta: ");
	mes = (num % 10000) / 100;
	cout << mes << endl;//salida

	printf("Anio de alta: ");
	a�o = (num % 100000000) / 10000;
	cout << a�o << endl;//salida


	printf("Son las tres primeras letras de la region donde se genero el CUC: ");
	cout << frase[0] << frase[1] << frase[2] << endl;//salida

	printf("Empresa de Lima (0: No, 1: Si): ");
	lim = (frase[0] == 'L' && frase[1] == 'I' && frase[2] == 'M') * 1;
	cout << lim << endl;//salida

	printf("Tamanio de la empresa (G: Grande, M: Mediana, P: Pequenia): ");
	cout << frase[3] << endl;//salida

	printf("Empresa grande (0: No, 1: Si): ");
	emp = (frase[3] == 'G') * 1;
	cout << emp << endl;//salida

	printf("Anios operando: ");
	op = a�oh - a�o;
	cout << op;//salida


	_getch();


}

