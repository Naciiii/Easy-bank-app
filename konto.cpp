#include "konto.h"
#include <iostream>
#include <string>
using namespace std;

int Konto::kontoNummerZaehler = 0;

Konto::Konto()

{
    string Name,Vorname;
  kontoNummer = kontoNummerZaehler;
  kontoNummerZaehler++;
  cout << "Geben Sie ihre Name und Vorname"<<endl;
  cin >> Name >> Vorname;
  kunde.name = Name;
  kunde.vorname = Vorname;
  geld = 0;

}

/*Konto::Konto(const Konto &konto)
{
    geld = konto.geld;
    kunde = konto.kunde;

    kontoNummer = kontoNummerZaehler;
    kontoNummerZaehler++;
}
*/
void Konto::kontoAnzeigen()
{
    cout << kunde.name << kunde.vorname;
    cout << geld;
    
}

void Konto::einzahlung(float einbetrag)
{
    geld += einbetrag;
}

void Konto::auszahlung(float ausbetrag )
{
    geld -= ausbetrag;
}

int Konto::getKontoNummer() const
{
    return kontoNummer;
}
