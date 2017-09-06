/*
Ciao, with this program you can enter a maximum of 20 numbers, positives (0 or more) or negatives (less than 0),
and they'll be sorted in two different arrays, one for positives and one for negatives. Then it will execute the sum of the elements.
*/

#include <iostream>
using namespace std;

void sizeArray(int &size) {
    do {
        cout << "Insert size of the array: ";
        cin >> size;
    }while((size<=0)||(size>20));
}

void enterElements(int size, int array[]) {
    for(int i=0;i<size;i++) {
        cout << "Insert element number " << i+1 << ": ";
        cin >> array[i];
    }
}

void sortElements(int size, int p, int n, int array[], int positive[], int negative[]) {
    for(int i=0;i<size;i++) {
        if(array[i]>=0) {
            positive[p]=array[i];
            p++;
        }
        else {
            negative[n]=array[i];
            n++;
        }
    }
}

void sumElements(int size, int positive[], int negative[]) {
    for(int i=0;i<)
}

int main() {
    int arr1[20], pos[20], neg[20], len, cp=0, cn=0; //arr1 is the array that will contain all our values
    sizeArray(len);
    enterElements(len, arr1);
    sortElements(len, arr1, pos, neg);
    sumElements(len, pos, neg);
    return 0;
}
