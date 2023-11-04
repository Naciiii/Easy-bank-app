#include "bank.h"

Bank::Bank()
{

}



void Bank::addKontotoBank()
{
    Konto k;
    Kontos.push_back(k);
}

void Bank::kontoAnzeigen(int k)
{
   for(size_t i = 0; i<Kontos.size();i++){
       if(k == Kontos.at(i).getKontoNummer()){
           Kontos.at(i).kontoAnzeigen();
       }
   }
}

void Bank::einzahlung(float f, int k)
{
    for(size_t i = 0; i<Kontos.size();i++){
        if(k == Kontos.at(i).getKontoNummer()){
            Kontos.at(i).einzahlung(f);
        }
    }
}

void Bank::auszahlung(float f, int k)
{
    for(size_t i = 0; i<Kontos.size();i++){
        if(k == Kontos.at(i).getKontoNummer()){
            Kontos.at(i).auszahlung(f);
        }
    }
}
