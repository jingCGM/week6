#ifndef SRC_MOCKANALOGSENSOR_H_
#define SRC_MOCKANALOGSENSOR_H_

#include <gmock/gmock.h>
#include <iostream>
#include <AnalogSensor.hpp>

class MockAnalogSensor : public AnalogSensor {
 public:
    MOCK_METHOD0(testRead, double());
};

#endif /* SRC_MOCKANALOGSENSOR_H_ */