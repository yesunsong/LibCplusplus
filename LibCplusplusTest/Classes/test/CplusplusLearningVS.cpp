// C++LearningVS.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::time;

/**指针*/
int _tmain(int argc, _TCHAR* argv[]) {
    string str = "新手场";
    string str0 = "新手场";

    string str1 = "中级场";
    string str2 = "中级场";
    if (strcmp(str.c_str(), "新手场") == 0) {
        cout << "新手场" << endl;
    } else if (strcmp(str1.c_str(), "中级场") == 0) {
        cout << "中级场" << endl;
    }
    cout << "无输出" << endl;

    //system("pause");
    return EXIT_SUCCESS;
}

