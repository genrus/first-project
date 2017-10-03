#include <iostream>
#include <cstdlib>

using namespace std;

class Calcolatrice {
	public: 
	float num1;
	float num2;


	public:

		//Definizione dei metodi e del costruttore;

		/*Calcolatrice(float n1, float n2) {

			num1 = n1;
			num2 = n2;

		}*/

		Calcolatrice() {

			num1 = 0;
			num2 = 0;
			
		}

		void setNum1() {
            float n1;

            cout << "Inserisci primo numero: ";
            cin >> n1;

			num1 = n1;

		}

		void setNum2() {
            float n2;

            cout << "Inserisci secondo numero: ";
            cin >> n2;

			num2 = n2;

		}

		float getNum1() {

			return num1;

		}

		float getNum2() {

			return num2;

		}

		float sumNum() {
			float sum;
			
			sum = num1 + num2;
			return sum;

		}

		float divNum() {
			float div;
			
			if (num2!=0)
				div = (float) num1/num2;
			else
				div = 0;
			return div;

		}

		float subNum() {
			float sub;

			sub = num1 - num2;
			return sub;

		}

		float mulNum() {
			float mul;
			
			mul = num1 * num2;
			return mul;

	}

};



int main() {

	Calcolatrice calc;
    int scelta;
	float result;
	
    cout << "Calcolatrice V0.0\n";

    do {

		calc.setNum1();
		calc.setNum2();

		cout << "Che operazione vuoi effettuare?"
		     << "\n1)Addizione\n2)Sottrazione\n3)Moltiplicazione\n4)Divisione\n";
				
		cin >> scelta;

		switch(scelta) {
			case 1:
				cout << "La somma e' " << calc.sumNum() << "\n";
			break;
			case 2:
			    cout << "La differenza e' " << calc.subNum() << "\n";
			break;
			case 3:
				cout << "Il prodotto e' " << calc.mulNum() << "\n";
			break;
			case 4:
				cout << "Il quoziente e' " << calc.divNum() << "\n";
			break;
		}

	} while(scelta!=0);
	cout << "Il primo numero che avevi inserito e' " << calc.num1;
	return 0;
}
