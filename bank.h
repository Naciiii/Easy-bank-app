#ifndef BANK_H
#define BANK_H
#include <vector>
#include<iostream>
#include <konto.h>

class Bank
{
public:
    Bank();
    void addKontotoBank();
    void kontoAnzeigen(int k);
    void einzahlung(float f, int k);
    void auszahlung(float f, int k);






private:
    std::vector<Konto> Kontos;




};

#endif // BANK_H
