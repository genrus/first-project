#include <iostream>
#include <time.h>

using namespace std;

struct timer {
    int hour;
    int min;
    int sec;
};

void insertTime(timer &hms) {
    int temp;
    cout << "Insert hours: ";
    cin >> temp;
    if ((temp>=0)&&(temp<=23)) {
       hms.hour = temp;
       temp = 0;
    }
    cout << "Insert minutes: ";
    cin >> temp;
    if ((temp>=0)&&(temp<=59)) {
       hms.min = temp;
       temp = 0;
    }
    cout << "Insert seconds: ";
    cin >> temp;
    if ((temp>=1)&&(temp<=59)) {
       hms.sec = temp;
       temp = 0;
    }
}

long int convertTime(timer hms) {
    long int s = ((hms.hour)*60)*60 + (hms.min)*60 + hms.sec;
    return s;
}

void waitTime(long int secsUntilFinish) {
    long int paperino = time(0) + secsUntilFinish;
    while (time(0) < paperino);
}

int main() {
//Insert time
    timer pippo;
    insertTime(pippo);
//Convert in seconds
    long int secs = convertTime(pippo);
//Iterate until finish
    waitTime(secs);
//Finish
    return 0;
}
