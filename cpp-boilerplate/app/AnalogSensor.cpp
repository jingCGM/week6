#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>

AnalogSensor::AnalogSensor() {
}

AnalogSensor::~AnalogSensor() {
}

double AnalogSensor::Read() {
    std::shared_ptr<std::vector<int>> readings = std::make_shared<std::vector<int>>(1, 10);

    double result = std::accumulate(readings->begin(), readings->end(), 0.0) / readings->size();
    return result;
}


