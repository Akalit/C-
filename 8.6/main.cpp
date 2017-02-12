#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
#include <windows.h>


int pk(int vsp);
int usr(int wsp);

using namespace std;

int main()
{
	HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));

	int user = 0, wsp = 6, vsp = 6, pc = 0;

	float sumpc = 0, sumuser = 0;
	bool hod = 0;
	cout << "Chey 1 hod ? \n USER = 0 (false) or PC = The rest of numbers (true)" << endl;   cin >> hod;   cout << "\n The game has begun!\n" << endl;
	SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);
	if (hod == false) { vsp--;   for (int q = 0; q < 2; q++) { if (vsp != 0) { pc = pk(vsp); sumpc += pc;   cout << "PC = " << pc<< endl;/*sign(user,pc);*/ }}}
	SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


cout << endl << endl;

	for (int q = 0; q < 5; q++)
	{
		if (wsp != 0)
		{
			cout << "\n Press any key to dice \n" << endl;    wsp--;   _getch();
			SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			for (int q =0; q < 2; q++) { user = usr(wsp); sumuser += user;   cout << "USER = " << user;   /*sign(user, pc);*/   cout  << endl ;}
			SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		}

cout << "\n"<< endl;

		if (vsp != 0)
		{
			SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);
			vsp--;  for (int q = 0; q < 2; q++) if (vsp != 0) {{ pc = pk(vsp); sumpc += pc;   cout << "PC = " << pc; /*sign(user, pc);*/ cout << endl ;}}
			SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		}
	}

	cout << "\n Result PC = " << sumpc << endl;   cout << "\n Result USER = " << sumuser << endl;
	(sumpc > sumuser) ? ( cout << "\n\t PC WIN! \n") : (cout << "\n \tUSER WIN! \n");
	sumpc /= 5;   sumuser /= 5;

	cout << "\n Sred za kidanie kubikov PC = " << sumpc << endl;   cout << "\n Sred za kidanie kubikov USER= " << sumuser << endl;
	_getch();
}




int pk(int vsp)
{
	int pc;

	if (vsp != 0)
	{
		pc = rand() % 5 + 1; return (pc);
	}
}


int usr(int wsp)
{
	int polz;
	if (wsp != 0)
	{
		polz = rand() % 5 + 1; return (polz);
	}
}

