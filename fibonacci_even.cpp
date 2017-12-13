#include <iostream>

using namespace std;

int main() {

	const long lim = 4000000;
	long int c1 = 1, c2 = 2, sum = 0, tmp;
	
	do {
		if ((c2%2)==0)
			sum += c2;
		tmp = c1;
		c1 = c2;
		c2 += tmp;

	} while(c2 <= lim);

	cout << "La somma dei valori é: " << sum << "\n";
	return 0;
}