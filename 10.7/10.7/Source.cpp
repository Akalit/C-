#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
#include <ctype.h>
using namespace std;

void slov(char *user); int slovo =0, s_slov = 0, s_nam = 0;
void znak(char *user);  int znaks = 0;
void reg(char *user); int v_reg =0, n_reg =0;
void language(char *user); char *s_language = new char [39];
void probel (char *user);
void zagreg(char *user);
void alf(char *user);
void random(char *user);
void rifm(string v_user);
int main(){
	char user[80];
	system("chcp 1251");  system("cls");
	cout << "Введите строку: " << endl;	  cin.get(user, 80); 
	string v_user = user;
	slov(user);   znak(user);   language(user);   probel(user);   zagreg(user);   reg(user);   alf(user);   random(user);   rifm(v_user);
	
	cout <<"\n\n"<< user<< endl;
	cout << "Количество слов в строке " << s_slov << endl;
	cout << "Количество цифр в строке " << s_nam << endl;
	cout << "Количество символов в строке " << strlen(user) << endl;
	cout << "Количество знаков в строке " << znaks << endl;
	cout << "Количество  больших букв в строке " << v_reg << endl;
	cout << "Количество  маленьких буквв строке " << n_reg << endl;
	cout << "Язык "<< s_language << endl;
	cin.get();
	return 0 ;}

void slov(char *user){
for (int q = 0; user[q] != '\0'; q++) {
   if (user[q] > 47 && user[q] < 58) s_nam++;

		if (slovo == 0 && (user[q] < 32  || user[q] > 64))   { slovo = 1;   s_slov++;}
			else {
			    if (user[q] == 32)     slovo = 0;}}}

void znak(char *user){
   for (int q =0; user[q] != '\0';q++) 
      if (user[q] > 32 && user[q] < 48 || user[q] > 57 && user[q] < 65)		znaks++ ;}

void reg(char *user)
{
	for (int q = 0; user[q] != '\0'; q++){
		if (user[q] > char (64) && user[q] < char (91))  v_reg++;
		   else {  if (user[q] > char (191) && user[q] < char (224)) v_reg++ ;}}


	for (int w = 0; user[w] != '\0'; w++) {
		if (user[w] > char(96) && user[w] < char(123))  n_reg++;
		else { if (user[w] > char(223) && user[w] < char(256)) n_reg++  ;}}}

void language(char *user)
{
int r =0,y =0,a =0;
	for (int q = 0; user[q] != '\0'; q++) {
	  if (user[q] == char (218) || user[q] == char(250) || user[q] == char(219) || user[q] == char(251) || user[q] > char(191) && user[q] < char(256))   r++; 
	     else if(user[q] == char(178) || user[q] == char(179) || user[q] == char(180) || user[q] == char(165) || user[q] == char(175) || user[q] == char(191) || user[q] > char(191) && user[q] < char(256))   y++;
		    else if (user[q] > char(64) && user[q] < char(91) || user[q] > char(96) && user[q] < char(123)) a++;
		   
		 if (r != 0 && a == 0 && y == 0) s_language = "Русский";
		    else if (y != 0 && r == 0 && a ==0) s_language = "Украинский";
		       else if (a != 0 && r == 0 && y == 0) s_language = "Английский ";
			      else s_language = "В тексте присудствует несколько языков";}}

void probel(char *user)
{
	for (int q = 0; user[q] != '\0'; q++) {
	   if (user[q] == 32 && user[q-1] == 32) 
	     for (int w = q; user [w+1] != '\0';w++)   swap(user[w],user[w+1]) ;}}


void zagreg(char *user){

	setlocale(LC_ALL, "Russian");
	for (int q = 0; user[q] != '\0'; q++)
		user[q] = tolower(user[q]);

user[0] = toupper(user[0]);
	for (int q = 0; user[q] != '\0'; q++)  
		if(user[q] == '.' || user[q] == '!' || user[q] == '?') user[q+2] = toupper(user[q+2]);}


void alf(char *user)
{
	string vsp_user = user;		vector<string> newuser;

	istringstream potok(vsp_user);

	while (potok >> vsp_user) { newuser.push_back(vsp_user)	;}
	sort(newuser.begin(), newuser.end());
	vector<string>::iterator vsp = newuser.begin();  cout << "\n\tAlfavit : ";
	while (vsp != newuser.end()){   cout << *vsp << " ";   vsp++;}}


void random(char *user)
{

		vector<string> newuser;   istringstream potok(user);  cout << endl;

	while (potok >> user) { newuser.push_back(user); }
	random_shuffle(newuser.begin(), newuser.end());
	vector<string>::iterator vsp = newuser.begin();  cout << "\n\tRANDOM : ";
	while (vsp != newuser.end()) { cout << *vsp << " ";   vsp++; }

}


void rifm(string v_user)
{
	cout << "\n\n\t\tРифма" << endl;

	string s;   s.push_back(char(32));

	for (int q = 0; v_user[q] != '\0'; q++) {
		if (unsigned char(v_user[q]) == char(32))	s.push_back(' ');
		else if (isalpha((unsigned char)v_user[q]))	s.push_back(v_user[q]);
	}
	s.push_back(char(32));

	for (int q = 1; s[q] != '\0'; q++) {
		if (s[q] == 32 && s[q - 1] == 32)
			for (int w = q; s[w + 1] != '\0'; w++)   swap(s[w], s[w + 1]);
	}

	string okonchani, vsp2, vsp3;   int odt;

	for (int q = 2; s[q] != '\0'; q++)
		if (s[q] == ' ') {
			okonchani.push_back(s[q - 2]); okonchani.push_back(s[q - 1]); odt = q;
			for (int w = q - 1; s[w] != ' '; w--) { vsp2.push_back(s[w]); }

			reverse(vsp2.begin(), vsp2.end());

			for (int r = odt; s[r] != '\0'; r++) {
				if (s[r] == okonchani[0] && s[r + 1] == okonchani[1] && s[r + 2] == char(32)) {
					for (int t = r + 1; s[t] != char(32); t--) vsp3.push_back(s[t]); reverse(vsp3.begin(), vsp3.end()); cout <<"\n\n\t"<< vsp2 << "\t\t" << vsp3 << endl; okonchani = ""; vsp2 = ""; vsp3 = ""	;}}}}


