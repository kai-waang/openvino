// Copyright (C) 2023 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <common_test_utils/ngraph_test_utils.hpp>

#include "snippets/pass/tokenization.hpp"

namespace ov {
namespace test {
namespace snippets {

class TokenizeMHASnippetsTests : public TransformationTestsF {
public:
    virtual void run();

protected:
    ov::snippets::pass::SnippetsTokenization::Config config;
};

}  // namespace snippets
}  // namespace test
}  // namespace ov
