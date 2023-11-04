#ifndef KONTO_H
#define KONTO_H
#include <string>

class Konto
{
    struct Kunde{
        std::string name;
        std::string vorname;
    };

public:
    Konto();
    //Konto(const Konto& konto);
    void kontoAnzeigen();
    void einzahlung(float f);
    void auszahlung(float f);




    int getKontoNummer() const;

private:
    float geld;
    int kontoNummer;
    static int kontoNummerZaehler;
    Kunde kunde;


};

#endif // KONTO_H
