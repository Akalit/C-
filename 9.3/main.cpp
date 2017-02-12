#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
#include <windows.h>

using namespace std;
int fn(int *arrey);
int a,r;
int main()
{
	HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);

	srand(time(NULL));
	int vsp;
	cout << "Enter size arrey" << endl;
	cin >> a;
	cout << "\n\n\n" << endl;
	int *arrey = new int[a];
	SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	for (int q = 0; q < a; q++)
	{
		arrey[q] = rand() % 95 + 5; cout << arrey[q] << "   ";
	}
	SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << "\n\n\n" << endl;
	fn(arrey);

}




int fn(int *arrey)
{
    HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);
int vsp =0;
	int q = 0, r = 0;
	do
	{
		q++;
		vsp = q * q;
	} while (a > vsp);
	r = q;
	int ar[r][r];
	int odn = 0;
	for (int q = 0; q < r; q++)
		for (int w = 0; w < r; w++)
		{

			ar[q][w] = arrey[odn];
			if (odn >= a) { ar[q][w] = 1; }
			odn++;
		}
	for (int z = 0; z < r; z++)
	{
		cout << endl;
		for (int x = 0; x < r; x++)
		{
			if (ar[z][x] == 1)
			{
				SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout << ar[z][x] << "\t";
				SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			}
			else
			{
				SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				cout << ar[z][x] << "\t";
				SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			}
		}
	}
	cout << "\n\n\n" << endl;
}
