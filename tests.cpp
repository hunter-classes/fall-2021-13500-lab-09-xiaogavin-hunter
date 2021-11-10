#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

Coord3D test_one = {10, 20, 30}; 
Coord3D test_two = {5, 6, 7};
Coord3D test_three = {0, -5, 50};
Coord3D test_four = {100, 100, 100};
Coord3D test_five = {69, 105, -50};


TEST_CASE("Task A:") { 
    CHECK(length(&test_one) == 37.4166);
    CHECK(length(&test_two) == 10.4881);
    CHECK(length(&test_three) == 50.2494);
    CHECK(length(&test_four) == 173.2051);
    CHECK(length(&test_five) == 135.2257);
}

TEST_CASE("Task B:") { 
    CHECK(fartherFromOrigin(&test_one, &test_one) == &test_one);
    CHECK(fartherFromOrigin(&test_five, &test_two) == &test_five);
    CHECK(fartherFromOrigin(&test_three, &test_three) == &test_three);
    CHECK(fartherFromOrigin(&test_two, &test_four) == &test_four);
    CHECK(fartherFromOrigin(&test_four, &test_five) == &test_four);
}

// results are in ## ## ##, * 2 for all 
TEST_CASE("Task C:") { 
    CHECK(move(&test_one, &test_two, 2) == "20 32 44"); // 10+5*2 | 20+6*2 | 30+7*2
    CHECK(move(&test_two, &test_five, 2) == "143 216 -93"); // 5+69*2 | 6+105*2 | 7+-50*2
    CHECK(move(&test_four, &test_three, 2) == "100 90 200"); // 100+0*2 | 100+-5*2 | 100+50*2
    CHECK(move(&test_five, &test_one, 2) == "89 145 10"); // 69+10*2 | 105+20*2 | -50+30*2
    CHECK(move(&test_one, &test_three, 2) == "10 10 130"); // 10+0*2 | 20+-5*2 | 30+50*2
}

// Uses another function to test, function basically makes a pointer, stores address in a string, 
// deletes pointer and repeats for another pointer 
// Then compares address and returns true/false. Should always be true.
TEST_CASE("Task E:") {
    CHECK(is_same_address(test_one.x, test_one.y, test_one.z) == true);
    CHECK(is_same_address(test_two.x, test_two.y, test_two.z) == true);
    CHECK(is_same_address(test_three.x, test_three.y, test_three.z) == true);
    CHECK(is_same_address(test_four.x, test_four.y, test_four.z) == true);
    CHECK(is_same_address(test_five.x, test_five.y, test_five.z) == true);

}