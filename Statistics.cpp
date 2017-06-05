#include "Statistics.h"
#include <string>
void Statistics::send(std::string name) {
    if(name.substr(0, 5).compare("READ ")) {
        name = name.substr(5, name.size() - 5);
        int port = std::stoi(name);
        if(mNoReads > 0) {
            for (int i = 0; i < mNoReads; ++i) {
                arithmeticMean += mCntrl.receive(port);
            }
            arithmeticMean /= mNoReads;
        }
    }

}

float Statistics::receive() {
    return arithmeticMean;
}
