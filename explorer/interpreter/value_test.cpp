// Part of the Carbon Language project, under the Apache License v2.0 with LLVM
// Exceptions. See /LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#include "explorer/interpreter/value.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace Carbon::Testing {
namespace {

TEST(ValueTest, ValueKindName) {
  EXPECT_EQ("alternative constructor value",
            ValueKindName(Value::Kind::AlternativeConstructorValue));

  EXPECT_EQ("int type", ValueKindName(Value::Kind::IntType));
}

}  // namespace
}  // namespace Carbon::Testing