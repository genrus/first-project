#include <iostream>
#include <string>

using namespace std;

class Terreno {

	int estenmq;
	float percedif;
	float rendmq;

public: 

	string codice;

	Terreno () {

	}

	void inserisci(int n) {

		cout << "Inserisci il codice del terreno n°" << n << ": ";
		cin >> codice;
		cout << "Inserisci l'estensione del terreno n°" << n << " (in mq): ";
		cin >> estenmq;
		cout << "Inserisci la percentuale edificabile del terreno n°" << n << ": ";
		cin >> percedif;
		cout << "Inserisci la rendita al mq del terreno n°" << n << ": ";
		cin >> rendmq; 

	}

	float rendita() {

		float rend = rendmq * estenmq;
		return rend;

	}

	float edificabile() {

		float mq = (percedif*estenmq)/100;
		return mq;

	}

	void stampa() {

		cout << "\nIl codice del terreno è: " << codice;
		cout << "\nL'estensione del terreno in mq è: " << estenmq;
		cout << "\nLa percentuale edificabile è: " << percedif;
		cout << "\nLa rendita al mq è: " << rendmq << endl;

	}

};

void dimVet(int &n) {
	do {
		cout << "Quanti terreni vuoi gestire?";
		cin >> n;
	} while  ((n<0)||(n>100));

}

void caricaVet(Terreno vt[], int n) {
	int i;
	for (i=0;i<n;i++) {
		vt[i].inserisci(i+1);
	}
}

void maxEdif(Terreno vt[], int n) {
	int i, pos;
	float max = vt[0].edificabile();
	for (i=0;i<n;i++) {
		if (vt[i].edificabile()>max) {
			pos = i;
			max = vt[i].edificabile();
		}

	}
	vt[pos].stampa();

}

void renditaMed(Terreno vt[], int n) {
	int i, s = 0;
	
	for (i=0;i<n;i++) {
		s+=vt[i].rendita();
	}
	
	cout << "La rendita media dei terreni è: " << s/n << endl;

}

void stampaCodice(Terreno vt[], int n) {
	int i = 0;
	bool found = false;
	string cod;

	cout << "Inserire codice terreno: ";
	cin >> cod;

	while ((i<n)&&(found!=true)) {
		if (cod == vt[i].codice) {

			found = true;
			cout << "Rendita totale terreno: " << vt[i].rendita() << endl;
			cout << "Mq edificabili del terreno: " << vt[i].edificabile() << endl;

		}
		else
			i++;
	}

	if (found == false) {
		cout << "Il codice non corrisponde a nessun terreno.\n";

	}

}

int main() {
	Terreno t[100];
	int sceltaOp, dim;

	dimVet(dim);
	caricaVet(t, dim);

	do {

		cout << "\nCosa vuol fare?";
		cout << "\n1)Stampa dati terreno con il massimo numero di mq edificabili;\n2)Stampa rendita media terreni;\n3)Stampa rendita totale e mq edificabili di un terreno;\n";
		cin >>  sceltaOp;

		switch(sceltaOp) {
			case 1:
				maxEdif(t, dim);
			break;
			case 2:
				renditaMed(t, dim);
			break;
			case 3:
				stampaCodice(t, dim);
			break;
		}

	} while (sceltaOp!=0);

	return 0;
}