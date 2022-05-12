#include "../sample.h"

TEST_SUITE("sample.h") {
    TEST_CASE("testing get_one") {
        CHECK(get_one() == 1);
        CHECK(get_one() == 3);
    }

}

