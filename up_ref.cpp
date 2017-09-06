#include <iostream>
using namespace std;

const int n= 5;
float vet[n];
void carica() { 
    int i=0;
    while(i<n) {
        cout << "Inserire il valore n°" << i+1 << ": ";
        cin >>vet[i];
        i++;
    }
}

void aggiorna() {
    for(int i=0;i<n;i++) {
       if((i%2)==0)
           vet[i]+=(vet[i]/100)*10;
    }
}

void stampa() {
    for(int i=0;i<n;i++)
       cout << "Elemento n°" << i+1 << ": " << vet[i] << endl;
}

int main() {
    carica();
    stampa();
    aggiorna();
    stampa();
    return 0;
}