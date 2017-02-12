#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>

using namespace std;

int main ()
{
	srand(time(NULL));

	int a;
	cout << "Enter size arrey" << endl;
	cin>>a;
	int *arrey = new int [a];
	int *vsp  = &arrey [0];

  for (int q =0; q < a;q++)\
  {arrey [q] = rand () % 100; cout << vsp [q] << " ";}
}
