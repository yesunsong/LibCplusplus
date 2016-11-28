#ifndef POINTER_TEST_H
#define POINTER_TEST_H

#include "base/BaseTest.h"
#include <string>
#include <vector>
using namespace std;

class PointerTest :BaseTest {
public:
    virtual void test()override;
    void badSwap(int x, int y);
    void goodSwap(int* pX, int* pY);
    string* ptrToElement(vector<string>* const pVec, int i);
    void increase(int* const array, int NUM_ELEMENTS);
    void display(const int* const array, const int NUM_ELEMENTS);
};

#endif // !POINTER_TEST_H