//
//  main.cpp
//  LibCplusplusTest
//
//  Created by Sunsong Ye on 16/11/24.
//  Copyright © 2016年 Sunsong Ye. All rights reserved.
//

#include <iostream>
#include "Test.h"

int main(int argc, const char * argv[]) {
    std::cout << "Hello C++!\n";

    Test* test = new Test();
    test->sayHello();

    return 0;
}
