#include "doctest.h"
#include "../sample2.h"
#include <stdexcept>

TEST_SUITE("sample2") {

  TEST_CASE("testing sample2_throws_error") {
      CHECK_THROWS_AS(sample2_throws_error(), std::runtime_error);
  }

}

