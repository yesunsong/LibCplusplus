#ifndef VECTOR_TEST_H
#define VECTOR_TEST_H

#include "base/BaseTest.h"

class VectorTest :BaseTest {
public:
    void useHeroInventory3();
    void useHeroInventory2();
    void useAlgorithm();
    void useHangman();
    virtual void test()override;
};

#endif // !VECTOR_TEST_H