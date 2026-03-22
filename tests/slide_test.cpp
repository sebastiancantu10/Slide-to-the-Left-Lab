#include <catch2/catch_test_macros.hpp>
#include "../src/slide.hpp"

// test single shift
TEST_CASE("Shift array by 1") {
    int arr[] = {1,2,3,4,5};
    arrayShift(arr, 5, 1);
    REQUIRE(arr[0] == 2);
    REQUIRE(arr[4] == 1);
}

// test multiple shifts
TEST_CASE("Shift array by 3") {
    int arr[] = {1,2,3,4,5};
    arrayShift(arr, 5, 3);
    REQUIRE(arr[0] == 4);
    REQUIRE(arr[1] == 5);
    REQUIRE(arr[2] == 1);
}

// test shifts equal to size
TEST_CASE("Shift array by size") {
    int arr[] = {1,2,3};
    arrayShift(arr, 3, 3);
    REQUIRE(arr[0] == 1);
    REQUIRE(arr[2] == 3);
}

// test shifts greater than size
TEST_CASE("Shift array by more than size") {
    int arr[] = {1,2,3};
    arrayShift(arr, 3, 4); // same as 1 shift
    REQUIRE(arr[0] == 2);
    REQUIRE(arr[1] == 3);
    REQUIRE(arr[2] == 1);
}