#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>

using namespace std;
int System;


void systeam(int Number, int System)
{
	cout << "\nNumber in " << System << " System " << endl << endl;
	int i = 0, vsp[50];
	for (; Number>0; i++)
	{
		vsp[i] = Number%System;
		Number /= System;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		if (vsp[j]<10)
			cout << vsp[j];
		else
			cout << char(vsp[j] + 'A');
	}
}
int main()
{
	int Number;
		cout << "Enter Number\n";
		cin >> Number;
	lovegoto:
		cout << "Enter System\n";
		cin >> System;

if (System > 1 && System <17) { systeam(Number, System) ;} else { goto lovegoto ;}


		cout << "\n" << endl;

}
