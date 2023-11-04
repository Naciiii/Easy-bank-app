#include <iostream>
#include <konto.h>
#include <bank.h>
using namespace std;


int main()
{
    Bank b;
    char eingabe;
    int kontoNummer;
    float betrag;
    do{
        cout << "Menu" << endl
             << "(a) Konto Anzeigen"<<endl
             << "(b) Geld Auszahlen"<<endl
             << "(c) Geld Einzahlen"<<endl
             << "(d) Konto Erstellen"<<endl;
        cin >> eingabe;


        switch (eingabe) {

        case 'a':
            cout <<" bitte geben Sie ihre Kontonummer"<< endl;
            cin >> kontoNummer;
            b.kontoAnzeigen(kontoNummer);
            break;
        case 'b':
            cout <<"Cout bitte geben Sie ihre Kontonummer"<< endl;
            cin >> kontoNummer;
            cout << "Bitte geben Sie den Betrag, den sie auszahlen wollen"<<endl;
            cin >> betrag;
            b.auszahlung(betrag, kontoNummer);
            b.kontoAnzeigen(kontoNummer);

            break;
        case 'c':
            cout <<"Cout bitte geben Sie ihre Kontonummer"<< endl;
            cin >> kontoNummer;
            cout << "Bitte geben Sie den Betrag, den sie einzahlen wollen"<<endl;
            cin >> betrag;
            b.einzahlung(betrag, kontoNummer);
            b.kontoAnzeigen(kontoNummer);
            break;
        case 'd':
            b.addKontotoBank();
            break;

        }


    }while (eingabe != 'x');




}
