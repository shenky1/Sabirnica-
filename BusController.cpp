#include "BusController.h"
#include <iostream>
#include <stdexcept>
void BusController::insert(Instrument * p) {
    p->setPort(mDevices.size());
    mDevices.push_back(p);
    std::cout << "Ubacen " << p->deviceName() << " instrument." << std::endl;
}

void BusController::send(unsigned int address, std::string cmd) {
    if(mDevices.size() >= address) {
        throw std::invalid_argument("Wrong address!");
    } else {
        mDevices.at(address)->send(cmd);
    }
    std::cout << "BusController::Send " << std::endl;
}

float BusController::receive(unsigned int address) {
    if(mDevices.size() >= address) {
        throw std::invalid_argument("Wrong address!");
    } else {
        return mDevices.at(address)->receive();
    }
}
