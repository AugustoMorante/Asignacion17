
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void factorial(int n)
{
	int factorial = 1, i = 1;
	cout << "Inserte numero: ";
	cin >> n;
	while (i <= n)
	{
		factorial = factorial * i;
		i++;
	}
	cout << "Factorial: " << factorial << endl;
	return;
}

void Exponencial(int a, int k)
{
	int n = 1, i = 1, ck = 1;
	double sumatoria, numerador, denominador, fraccion;
	if (n == 1)
	{
		sumatoria = 1;
		n++;
	}
	if (n > 1)
	{
		while (ck <= k)
		{
			numerador = pow(a, ck);
			if (ck < 3)
			{
				denominador = ck;
			}
			else
			{
				denominador = 1;
				while (i <= ck)
				{
					denominador = denominador * i;
					i++;
				}
			}

			fraccion = numerador / denominador;

			sumatoria = sumatoria + fraccion;
			ck++;
		}
		n++;
	}
	cout << "Resultado: " << sumatoria << endl;
	return;
}

void Dibuja(int n)
{

	for (int j = 0; j < n; ++j) {
		for (int i = 0; i < n - j - 1; ++i)
			cout << "  ";
		for (int i = 0; i < 2 * j + 1; ++i)
			cout << i + 1 << " ";
		cout << endl;
	}

	for (int j = n - 2; j >= 0; --j) {
		for (int i = 0; i < n - j - 1; ++i)
			cout << "  ";
		for (int i = 0; i < 2 * j + 1; ++i)
			cout << i + 1 << " ";
		cout << endl;
	}
	return;
}

int main()
{
	int n, a, k, opcion;
	while (1)
	{
		cout << "    MENU PRINCIPAL   \n";
		cout << "1) Determinar el factorial de un numero\n";
		cout << "2) Calcular el valor de e^a\n";
		cout << "3) Imprime un rombo\n";
		cout << "4) Salir\n";
		cout << ">> "; cin >> opcion;
		switch (opcion)
		{
		case 1:
			do
			{
				cout << "Inserte un numero positivo: ";
				cin >> n;
			} while (n < 1);
			factorial(n);
			break;
		case 2:
			cout << "Inserte a:";
			cin >> a;
			do
			{
				cout << "Inserte k (Debe ser menor que 20): ";
				cin >> k;
			} while (k <= 0 || k > 20);
			Exponencial(a, k);
			break;
		case 3:
			do {
				cout << "Inserte numero menor que 11: ";
				cin >> n;
			} while (n <= 0 || n > 11);
			Dibuja(n);
			break;
		case 4:
			break;
		default:
			break;
		}
		if (opcion == 4)
		{
			break;
		}
	}
	_getch();
}

