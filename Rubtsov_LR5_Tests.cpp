#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Rubtsov_LR5_part2.h"

using namespace cute;

void testUserInput_Empty() {
    string str = "";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Letter() {
    string str = "ho";
    bool expected = false;
    bool actual = isNumber(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_LetterWithNumber() {
    string str = "89b";
    bool expected = false;
    bool actual = isAlpha(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_NaturalNumberK() {
    string str = "89b";
    bool expected = false;
    bool actual = UserInputK(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_NaturalNumberD() {
    string str = "79";
    bool expected = false;
    bool actual = UserInputD(str);
    ASSERT_EQUAL(expected, actual);
}

void testAddDigitRight() {
    ASSERT_EQUAL(1234, addDigitRight(123, 4));
}

void testAddDigitLeft() {
    ASSERT_EQUAL(4123, addDigitLeft(123, 4));
}

int main() {
    suite s;
    s.push_back(CUTE(testUserInput_Empty));
    s.push_back(CUTE(testUserInput_Letter));
    s.push_back(CUTE(testUserInput_LetterWithNumber));
    s.push_back(CUTE(testUserInput_NaturalNumberK));
    s.push_back(CUTE(testUserInput_NaturalNumberD));
    s.push_back(CUTE(testUserInput_NaturalNumberK));
    s.push_back(CUTE(testUserInput_NaturalNumberK));
    ide_listener<> listener;
    makeRunner(listener)(s, "tests");
    return 0;
}