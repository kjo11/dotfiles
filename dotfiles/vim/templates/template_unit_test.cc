/*
 * Copyright (2019) Reactive Robotics GmbH. All rights reserved.
 */
/**
 * @file
 * %HERE%
 */

#include "gtest/gtest.h"
#include "gmock/gmock.h"
<+ Include files +>

/// <+ Test description +>
TEST(%CAMELCLASS%, <+ Test name +>) {
<++>
}

int main(int argc, char** argv) {
  // The following line must be executed to initialize Google Mock
  // (and Google Test) before running the tests.
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
