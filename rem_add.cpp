#include <iostream>
#define LEN 10
using namespace std;


int vet[LEN];
int n = LEN;
//Create a vector in which you can remove or add elements (vector lenght is fixed)

void startElem() {
    for(int i=0;i<LEN;i++) {
       cout << "Insert number " << i+1 << " element: ";
       cin >> vet[i];
    }
}

void remElem() {
    int key;
    cout << "Which element would you like to remove? \nHere's what you've added: \n";
    for(int i=0;i<n;i++) {
        cout << vet[i] << "\n";
    }
    cin >> key;
    for(i=0;i<n;i++)
        if(vet[i]==key) {
            cout << "Removing...";
               
        }
}

bool addElem() {
    if(n=>LEV)
        return false;
    else
        cout << "Insert number
}