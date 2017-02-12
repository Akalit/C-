#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int points ();
int spoints = 0, wsp, a, b, answer;;
int main()
{
srand(time(NULL));

	for (int q =0; q < 10; q++)
	{a = rand () % 10; b = rand () % 10; wsp = a * b; cout <<a<<" * "<<b<< " = "<< "\nEnter answer..." << endl; cin >> answer;
	if (answer == wsp) { cout << "\n Correctly! \n\n";   points()   ;}   else   { cout << "\n Wrong! \n\n";   points() ;}}

	cout << " Points = " << spoints<< endl;
		_getch();
}

int points()
{
	if (answer == wsp) { spoints++; }
	else { spoints--; }
	return (spoints);
}
