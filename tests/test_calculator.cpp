#include "catch.hpp"
#include "calculator.hpp"

TEST_CASE("Calculator addition", "[calculator]") {
    Calculator calc;
    REQUIRE(calc.add(2, 2) == 4);
    REQUIRE(calc.add(-1, 1) == 0);
    REQUIRE(calc.add(0, 0) == 0);
}
