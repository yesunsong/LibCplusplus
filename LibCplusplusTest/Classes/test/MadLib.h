#ifndef MadLib_H
#define MadLib_H

#include "base/BaseTest.h"
#include <string>
using namespace std;

class MadLib:BaseTest {
public:
    virtual void test()override;
    string askText(string prompt);
    int askNumber(string prompt);
    void tellsStory(string name, string noun, int number, string bodyPart, string verb);
};

#endif // !BASETEST_H