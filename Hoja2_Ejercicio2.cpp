
#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void suma()
{
	int i = 1;
	int pr, pi, sr = 0, si = 0;
	int dr1, di1, dr2, di2;
	while (i <= 2)
	{
		cout << "Numero " << i << endl;
		cout << "Parte Real: ";
		cin >> pr;
		cout << "Parte imaginaria: ";
		cin >> pi;
		if (i == 1)
		{
			dr1 = pr;
			di1 = pi;
		}
		else
		{
			dr2 = pr;
			di2 = pi;
		}
		sr = sr + pr;
		si = si + pi;
		i++;
	}
	cout << "(" << dr1 << " + " << di1 << "i)  +  (" << dr2 << " + " << di2 << "i) = (" << sr << " + " << si << "i)" << endl;
	return;
}

void resta()
{
	int i = 1;
	int pr, pi, sr, si;
	int dr1, di1, dr2, di2;
	while (i <= 2)
	{
		cout << "Numero " << i << endl;
		cout << "Parte Real: ";
		cin >> pr;
		cout << "Parte imaginaria: ";
		cin >> pi;
		if (i == 1)
		{
			dr1 = pr;
			di1 = pi;
			sr = pr;
			si = pi;
		}
		else
		{
			dr2 = pr;
			di2 = pi;
			sr = sr - pr;
			si = si - pi;
		}
		i++;
	}
	cout << "(" << dr1 << " + " << di1 << "i) - (" << dr2 << " + " << di2 << "i) = (" << sr << " + " << si << "i)" << endl;
	return;
}

int main()
{
	char opcion;
	int i = 0;
	cout << "    MENU    \n";
	cout << "============\n";
	cout << "A. Sumar 2 Numeros Complejos\n";
	cout << "B. Restar 2 Numeros Complejos\n";
	cout << "X. Salir\n";
	do
	{
		cout << ">> ";
		cin >> opcion;
		if (opcion == 'A' || opcion == 'a')
		{
			suma();
			i++;
		}
		if (opcion == 'B' || opcion == 'b')
		{
			resta();
			i++;
		}
		if (opcion == 'X' || opcion == 'x')
		{
			i++;
		}
	} while (i == 0);

	system("pause");
	return 0;
}