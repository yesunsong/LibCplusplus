#ifndef ARRAYTEST_H
#define ARRAYTEST_H

#include "base/BaseTest.h"

class ArrayTest : BaseTest {
public:
    void useWordJumble();
    void useMultidimensionalArray();
    void useBaseArray();
    void understandCStyleString();
    virtual void test() override;
};

#endif // !ARRAYTEST_H