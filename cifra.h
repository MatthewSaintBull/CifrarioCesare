
/*
	Libreria che cifra e decifra il testo lavorando sull'ascii di ogni singolo carattere
*/
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
void cifra_decifra(string testocif,int chiave,bool com){
	int n=testocif.size();
	char p[n];
	strcpy(p,testocif.c_str());
	if(com==true){
		for(int i=0;i<n;i++)
			p[i]=p[i]+chiave;
	}
	else{
		for(int i=0;i<n;i++)
                p[i]=p[i]-chiave;
	}
	string testo(p);
	cout << testo<<endl;

}
