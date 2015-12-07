#include <iostream>
#include "cifra.h"
#include <string>
#include <sstream>
using namespace std;
int main(){
	bool com = true;
	string frase;
	int comando;
	int chiave;
	cout << "Frase : ";
	getline(cin,frase);

	cout << "Chiave : ";
	cin >> chiave;
	cout << "1 per cifrare, 2 per decifrare : ";
	cin >> comando;
	if (comando == 1) com = true;
	else if (comando == 2) com = false;
	else cout << "ERRORE";
	cifra_decifra(frase,chiave,com);
}
