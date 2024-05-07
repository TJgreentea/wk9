
#ifndef EQUIVALENCETESTS_H
#define EQUIVALENCETESTS_H

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test failed for positive integers!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test failed for negative integers!" << std::endl;
        }
    }
};

#endif // EQUIVALENCETESTS_H
