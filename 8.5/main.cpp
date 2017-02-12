#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
#include <windows.h>
HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;
void zv ();
int main()
{
	int user;
	cout << "Enter amount Floors" << endl; //¬ведите количестно этажей
	cin >> user;
	cout << endl;
int pm = 1, user2 = user + 1, vsp = user * 2 - 2;
SetConsoleTextAttribute(hOUTPUT, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
for (int w =0; w < vsp;w++)
{ cout << " "; }
cout << "*"<< endl;
SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


for (int q =0; q < user-2; q++)
{
user2--;
	for (int e = 0; e < user2 - 2; e++)
		{ cout << "  "; }
		//_getch();
		zv ();
	pm += 2;
	for (int q =0; q < pm; q++)
	{ cout << " ";}

	zv ();
	cout << endl;
	pm +=2;
}
SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);
user *= 2;
for (int q =0; q < user-2; q++)
{ cout << " *";  }
SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 cout << endl << endl << endl;
}

void zv()
{
	SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "*";
}
