#pragma once

#include <iostream>
#include <AnalogSensor.hpp>

class Total {
 public:
    double showSensor(AnalogSensor* lightSensor) {
        std::cout << "Averaged sensor reading: " << lightSensor->Read() << std::endl;
        return lightSensor->Read();
    }

    double testSensor(AnalogSensor* lightSensor) {
        return lightSensor->testRead();
    }
};