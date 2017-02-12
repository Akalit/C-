#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>

void sort(int *arrey); void MX (int *arrey);
int mx,mn;
using namespace std;
int main()
{
	srand(time(NULL));

	int arrey[10];

	for (int q = 0; q < 10; q++)
	{   arrey[q] = rand() % 100; cout << " " << arrey[q] << " "   ;}

	MX(arrey);   cout << "\n" << "\n min = " << mn << "\n max = " << mx << endl;
	sort(arrey);   cout << "\n" << endl;
	for (int q = 0; q < 10; q++)

		cout << " " << arrey[q] << " ";
	_getch();
}


void MX(int *arrey)
{
	for (int w = 0; w < 10; w++)
		for (int q = 0; q < 9; q++)
			if (arrey[q] > arrey[q + 1]) { swap(arrey[q], arrey[q + 1]); }
		mn = arrey [0];	mx = arrey [9];
}


void sort(int *arrey)
{
	for (int w = 0; w < 10; w++)
		for (int q = 0; q < 9; q++)
			if (arrey[q] > arrey[q + 1]) { swap(arrey[q], arrey[q + 1])   ;}
}
