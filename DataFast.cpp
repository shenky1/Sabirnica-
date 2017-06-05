#include "DataFast.h"
#include <chrono>
#include <string>
#include <math.h>

void DataFast::setMode(int i) {
    mMode = i;
};

void DataFast::send(std::string name) {
    if(receive() == 0) {
        setMode(sin(0.175*(mStartTime.time_since_epoch().count())));
    } else if(receive() == 1) {
        setMode(sin(2*0.175*(mStartTime.time_since_epoch().count())));
    }
}

float DataFast::receive() {
return mMode;
}

