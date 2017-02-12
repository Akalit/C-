#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void sort(int *ar,int vsp_odnM,int user);
int main ()
{

    srand(time(NULL));
    int user,user2; cout << "Enter stolb" << endl;cin>>user; cout << "Enter strok" << endl;  cin>>user2;
    int arrey [user][user2];
    cout << endl << endl<< endl;

cout << "Random nambers in arrey " << endl<< endl;

    for (int q =0; q < user; q++){
        for (int w =0; w < user2; w++){
         arrey [q][w] = rand () % 95 + 5;
        cout << arrey [q][w]<<" ";
        }
        cout << endl;
        }
cout << endl << endl<< endl;
        int *ar = new int [user*user2];
        int vsp_odnM =0;
        for (int q =0; q < user; q++)
        for (int w =0; w < user2; w++)
        {
            ar[vsp_odnM] = arrey [q][w];
            vsp_odnM++;
        }
            sort(ar,vsp_odnM,user);

cout << "1m arrey" << endl<< endl;
for (int w =0; w < vsp_odnM; w++)
            cout << ar [w]<< " ";


            vsp_odnM =0;
   for (int q =0; q < user; q++)
        for (int w =0; w < user2; w++)
        {
            arrey [q][w] = ar [vsp_odnM];
            vsp_odnM++;
        }

  cout << endl << endl<< endl;
  cout << "sort 2m arrey " << endl<< endl;
for (int q =0; q < user; q++)
{
for (int w =0; w < user2; w++)
{
cout << arrey [q][w]<<" ";

}
cout << endl;
}
}





void sort (int *ar,int vsp_odnM ,int user)
{
  for (int q =0; q < user*30; q++)
    for (int w =0; w < vsp_odnM-1; w++)
        if (ar[w] > ar[w+1]) {swap (ar[w],ar[w+1]);}
}
