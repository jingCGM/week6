#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <AnalogSensorMock.hpp>
#include <Total.hpp>

using ::testing::Return;
using ::testing::_;

TEST(dummy, should_pass) {
  MockAnalogSensor mockLightSensor;
  double showvalue = 10;
  EXPECT_CALL(mockLightSensor, testRead()).Times(1).WillOnce(Return(showvalue));

  Total total;
  double value = total.testSensor(&mockLightSensor);
  EXPECT_EQ(value, 10);
}
