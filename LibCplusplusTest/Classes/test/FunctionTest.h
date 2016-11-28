#ifndef FUNCTION_TEST_H
#define FUNCTION_TEST_H

#include "base/BaseTest.h"
#include <string>
using namespace std;

class FunctionTest : BaseTest {
public:
    virtual void test() override;
    void instructions();
    char askYesNo1();
    char askYesNo2(string question);
    void func();
    void access_global();
    void hide_global();
    void change_global();
    int askNumber(int high, int low = 1);
    int triple(int number);
    string triple(string text);
    inline int radiation(int health);
};

#endif // !FUNCTION_TEST_H