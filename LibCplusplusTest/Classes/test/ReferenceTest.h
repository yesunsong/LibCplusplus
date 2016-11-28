#ifndef REFERENCE_TEST_H
#define REFERENCE_TEST_H

#include "base/BaseTest.h"

#include <string>
#include <vector>
using namespace std;

class ReferenceTest :BaseTest {
public:
    virtual void test()override;
    string& refToElement(vector<string>& vec, int i);
    void badSwap(int x, int y);
    void goodSwap(int& x, int& y);
    void display(const vector<string>& vec);
};

#endif // !REFERENCE_TEST_H