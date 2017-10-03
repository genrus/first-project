/*
    -Strutture dati
    Tabella Candidati
    Matrice Risposte Candidati
    Vettore Risposte Esatte
    -Funzioni
    caricaRisposte
    caricaRispEsatte
    verificaRisposte
    maxRispSbagl
    cercaCognome
    
*/

#include <iostream>
#include <string>

using namespace std;

const int ncand = 2;
const int ndom = 5;
int  rispCa[ncand][ndom];

struct Candidato {
    string nome;
    string cognome;
    string codice;
    int nerrori;

};

void caricaCand(Candidato v[]) {
    int i;
    for(i=0;i<ncand;i++) {
        cout << "Inserire nome candidato: ";
        cin >> v[i].nome;
        cout << "Inserire cognome candidato: ";
        cin >> v[i].cognome;
        cout << "Inserire codice candidato: ";
        cin >> v[i].codice;
    }
}

void caricaRispCa() {
    int i, j;
    for (i=0;i<ncand;i++) {
        for (j=0;j<ndom;j++) {
            cout <<"Inserire risposta n"<<j+1<<" del cand. n"<<i+1<<": ";
            cin >> rispCa[i][j];
        }
    }

}

void caricaRispEs(int rispEs[]) {
    int i;
    for (i=0;i<ndom;i++) {
        cout << "Inserire risposta esatta al quesito n" << i+1 << ": ";
        cin >> rispEs[i];
    }
}

void verificaRisposte(Candidato cand[], int rispEsat[]) {
    int i, j;
    
    for (i=0;i<ncand;i++) {
        cand[i].nerrori = 0;
    }
    
    for (i=0;i<ncand;i++) {
        for (j=0;j<ndom;j++) {
            if (rispCa[i][j]!=rispEsat[j])
                cand[i].nerrori+=1;
        }
    }
}

void cercaCand(Candidato cand[]) {
    int i = 0;
    bool found = false;
    string chiave;
    
    cout << "Inserire codice: ";
    cin >> chiave;
    
    do {
        if (cand[i].codice==chiave)
            found = true;
        else    
            i++;
    }while ((found!=true)&&(i<ncand));
    
    if (found==true) {
        if (cand[i].nerrori<=3) {
            cout << "Il candidato ha superato la prova con " << cand[i].nerrori
                 << " errori.\n";
        }
        else
            cout << "Il candidato non ha superato la prova.\n";
    }
    else
        cout << "Nessun candidato corrispondente al codice inserito.\n";

}

void maxSbagli(int rispEsat[]) {
    int i, j, max = 0, e = 0, numeroRisp;
    
    for (j=0;j<ndom;j++) {
        for (i=0;i<ncand;i++) {
            if (rispCa[i][j]!=rispEsat[i]) {
                e++;
            }
        }
        if (e > max) {
            max = e;
            e = 0;
            numeroRisp = j+1;
        }
    }
    
    cout << "La domanda sbagliata più volte è stata la numero " << numeroRisp
         << ". \n";
}

int main() {
    Candidato c[ncand];
    int rispEs[ndom];
    
    caricaCand(c);
    caricaRispCa();
    caricaRispEs(rispEs);
    verificaRisposte(c, rispEs);
    cercaCand(c);
    maxSbagli(rispEs);
    
}

