#ifndef BUSCONTROLLER_H_INCLUDED
#define BUSCONTROLLER_H_INCLUDED
#include "Instrument.h"
#include <string>
#include <vector>
// Sabirnica.
class BusController {
public:
    // konstruktor
    BusController() {}

    ~BusController(){
    }

        // insertiraj instrunment i postavi mu broj porta. Radi provjere ispisati da je operacija
        // izvr�ena
    void insert(Instrument * p);

        // Po�alji naredbu cmd ure�aju na danoj adresi. Izbaci izuzetak ako nema ure�aja.
    void send(unsigned int address, std::string cmd);

        // Zatra�i vrijednost od ure�aja na danoj adresi.  Izbaci izuzetak ako nema ure�aja.
    float receive(unsigned int address);
private:
        // Prisutni instrumenti. Indeksi su "portovi"
    std::vector<Instrument*> mDevices;
};

#endif
