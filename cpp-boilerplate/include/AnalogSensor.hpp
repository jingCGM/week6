#pragma once

#include <iostream>

class AnalogSensor {
public:
    AnalogSensor();
    virtual ~AnalogSensor();
    double Read();
    virtual double testRead() = 0;
private:
    unsigned int mSamples;
};
