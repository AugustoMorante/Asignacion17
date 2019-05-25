
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void factorial()
{
	int x, n, i = 1, f = 1, exponente = 1, factorial = 1;
	double numerador, denominador = 1;
	double senX = 0, fraccion;
	do
	{
		cout << "Inserte numero de terminos: ";
		cin >> n; cout << endl;
	} while (n < 1);

	cout << "Inserte valor x: ";
	cin >> x; cout << endl;
	while (i <= n)
	{
		numerador = pow(x, exponente);

		do {
			denominador = denominador * f;
			f++;
		} while (f <= factorial);

		fraccion = numerador / denominador;

		if (i == 1)
		{
			senX = x;
		}
		else
		{
			if (i % 2 == 0)
			{
				senX = senX - fraccion;
			}
			else
			{
				senX = senX + fraccion;
			}
		}
		i++;
		exponente = exponente + 2;
		factorial = factorial + 2;
	}
	cout << "Respuesta: " << senX << endl;
	return;
}

void digit()
{
	int n, num, digit, exp, divisor, resultado;
	do {
		cout << "Ingrese valor de N: ";
		cin >> n;
	} while (n < 0);
	cout << "Ingrese el numero: ";
	cin >> num;
	exp = pow(10, n + 1);
	if (n == 0)
	{
		divisor = 1;
	}
	else
	{
		divisor = pow(10, n);
	}
	digit = (num % exp);
	resultado = digit / divisor;
	cout << "El n-esimo digito es: " << resultado << endl;
	return;
}

int main()
{
	int opcion;
	while (1)
	{
		cout << "Menu de opciones\n";
		cout << "1.- Calcular el seno\n";
		cout << "2.- Hallar el enesimo digito\n";
		cout << "3.- Fin\n";
		do {
			cout << ">> "; cin >> opcion;
		} while (opcion < 1 || opcion > 3);
		switch (opcion)
		{
		case 1:
			factorial();
			break;
		case 2:
			digit();
			break;
		case 3:
			break;
		}
		if (opcion == 3)
		{
			break;
		}
	}
	_getch();
}

