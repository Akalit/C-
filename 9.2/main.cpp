#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;
HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);
int main ()
{
	int a,d =0,s;
do
{
	cout << "Enter size arrey"<< endl;
	cin>> a;cout  << endl;
	d += a;
	cout << "Array size = ";  SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << d<< endl<< endl;  SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << "+ size arrey ? NO (0)"<< endl;
cin >> s;
}
while(s != 0);
cout << "\n\n" << endl;
cout <<"Created arrey "<< d<< endl<< endl; SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
int *arrey = new int [d];
for (int q =0; q < d;q++)
{ arrey [q] = rand () % 100;   cout << arrey [q]<< " ";}  SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
cout << endl<< endl;
}
