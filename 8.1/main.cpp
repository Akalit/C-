#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
#include <cmath>

using namespace std;

void modul (int ar);   int pow (int ar);
int us =0,v =0;
int main()
{
	srand (time(NULL));
cout << "\n Enter number \n"<< endl;
int ar,ur;
cin >>ar;
int  user;

	cout << "\n Add number in module ? \n" << endl;

	do { cout << "enter 0 (false) end 1(true)" << endl;   cin >> user ;}
    while (user != 0 && user != 1 );

	if (user == 1) { modul(ar) ;}

	do { cout <<"\n Add namber in pow ? \n\n" << "enter 0 (false) end 1(true)" << endl;   cin >> user ;}
	while (user != 0 && user != 1);

	if (user == 1) { ur = pow(ar);   cout << ar << " in pow ( "<< us << " )  * "<<ar*ar <<" = " << (ar*ar)*ur<< endl;   }
	else {; if (v == 2) {cout << ar <<" * " << ar*3 <<" = " << ar*4;   }cout << ar*-1 << " in pow ( "<< us << " )  * "<<ar*ar <<" = " << ((ar*ar)*ar)*-1<< endl ;}
	system("PAUSE");
}



void modul(int ar)
{
	cout << "\n Number in modul \n" << endl;
	if (ar < 0) {   ar *= -1   ;}
	cout << " = " << ar << endl;
	v++;
}


int pow(int ar)
{
    cout << "Enter pow..." << endl;
  cin >> us;
int a = pow (ar,us);
cout << ar <<" in pow ( "<< us <<" ) = "<<a<< endl;
v++;
	return (a);
	}

