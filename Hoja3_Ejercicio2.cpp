
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void Graficar(int n1, int n2, int n3, int n4)
{
	int n = 1;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 41; j++)
		{
			if (i == 2 && j >= 41 - n1 - 1)
			{
				if (i == 2 && j == 41 - n1 - 1)
				{
					cout << n1;
				}
				else
				{
					cout << "*";
					n++;
				}
			}
			else
			{
				cout << " ";
			}
			if (i == 3 && j >= 41 - n2 - 1)
			{
				if (i == 3 && j == 41 - n2 - 1)
				{
					cout << n2;
				}
				else
				{
					cout << "*";
					n++;
				}
			}
			else
			{
				cout << " ";
			}
			if (i == 4 && j >= 41 - n3 - 1)
			{
				if (i == 4 && j == 41 - n3 - 1)
				{
					cout << n3;
				}
				else
				{
					cout << "*";
					n++;
				}
			}
			else
			{
				cout << " ";
			}
			if (i == 5 && j >= 41 - n4 - 1)
			{
				if (i == 5 && j == 41 - n4 - 1)
				{
					cout << n4;
				}
				else
				{
					cout << "*";
					n++;
				}
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

int Hallar_anterior_mayor(int n1, int n2, int n3, int n4)
{
	int M, aM;
	if (n1 > n2 && n1 > n3 && n1 > n4)
	{
		M = n1;
	}
	if (n2 > n1 && n2 > n3 && n2 > n4)
	{
		M = n2;
	}
	if (n3 > n1 && n3 > n2 && n3 > n4)
	{
		M = n3;
	}
	if (n4 > n2 && n4 > n3 && n4 > n1)
	{
		M = n4;
	}
	if (M == n1)
	{
		if (n2 > n3 && n2 > n4)
		{
			aM = n2;
		}
		if (n3 > n2 && n3 > n4)
		{
			aM = n3;
		}
		if (n4 > n3 && n4 > n2)
		{
			aM = n4;
		}
	}
	if (M == n2)
	{
		if (n1 > n3 && n1 > n4)
		{
			aM = n1;
		}
		if (n3 > n1 && n3 > n4)
		{
			aM = n3;
		}
		if (n4 > n3 && n4 > n1)
		{
			aM = n4;
		}
	}
	if (M == n3)
	{
		if (n1 > n2 && n1 > n4)
		{
			aM = n1;
		}
		if (n2 > n1 && n2 > n4)
		{
			aM = n2;
		}
		if (n4 > n1 && n4 > n2)
		{
			aM = n4;
		}
	}
	if (M == n4)
	{
		if (n1 > n3 && n1 > n2)
		{
			aM = n1;
		}
		if (n2 > n3 && n2 > n1)
		{
			aM = n2;
		}
		if (n3 > n2 && n3 > n1)
		{
			aM = n3;
		}
	}
	return aM;
}

int Hallar_menor(int n1, int n2, int n3, int n4)
{
	int m;
	if (n1 < n2 && n1 < n3 && n1 < n4)
	{
		m = n1;
	}
	if (n2 < n1 && n2 < n3 && n2 < n4)
	{
		m = n2;
	}
	if (n3 < n1 && n3 < n2 && n3 < n4)
	{
		m = n3;
	}
	if (n4 < n2 && n4 < n3 && n4 < n1)
	{
		m = n4;
	}
	return m;
}

int Hallar_mayor(int n1, int n2, int n3, int n4)
{
	int M;
	if (n1 > n2 && n1 > n3 && n1 > n4)
	{
		M = n1;
	}
	if (n2 > n1 && n2 > n3 && n2 > n4)
	{
		M = n2;
	}
	if (n3 > n1 && n3 > n2 && n3 > n4)
	{
		M = n3;
	}
	if (n4 > n2 && n4 > n3 && n4 > n1)
	{
		M = n4;
	}
	return M;
}

int Hallar_posterior_menor(int n1, int n2, int n3, int n4)
{

	int M, m, aM, pm;

	M = Hallar_mayor(n1, n2, n3, n4);
	m = Hallar_menor(n1, n2, n3, n4);
	aM = Hallar_anterior_mayor(n1, n2, n3, n4);

	if (n1 != M && n1 != m && n1 != aM)
	{
		pm = n1;
	}
	if (n2 != M && n2 != m && n2 != aM)
	{
		pm = n2;
	}
	if (n3 != M && n3 != m && n3 != aM)
	{
		pm = n3;
	}
	if (n4 != M && n4 != m && n4 != aM)
	{
		pm = n4;
	}
	return pm;
}

void Generar_numeros()
{
	int n1, n2, n3, n4;
	int M, m, aM, pm;
	srand(time(NULL));
	n1 = 1 + rand() % (41 - 1);
	n2 = 1 + rand() % (41 - 1);
	n3 = 1 + rand() % (41 - 1);
	n4 = 1 + rand() % (41 - 1);
	M = Hallar_mayor(n1, n2, n3, n4);
	m = Hallar_menor(n1, n2, n3, n4);
	aM = Hallar_anterior_mayor(n1, n2, n3, n4);
	pm = Hallar_posterior_menor(n1, n2, n3, n4);
	Graficar(M, aM, pm, m);
	cout << endl << endl;
	cout << "Numero Mayor: " <<  M << endl;
	cout << "Numero Menor: " << m << endl;
	cout << "Numero Anterior al Mayor: " << aM << endl;
	return;
}

int main()
{
	Generar_numeros();
	_getch();
}

