// C++LearningVS.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include "StringTest.h"
#include <stdio.h>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void StringTest::test() {
    //创建string对象
    string word1 = "Game";
    string word2("Over");
    string word3(3, '!');
    //string对象的连接
    string phrase = word1 + " " + word2 + word3;
    cout << "The phrase is: " << phrase << "\n\n";
    //使用size()成员函数
    cout << "The phrase has " << phrase.size() << " characters in it.\n\n";
    //索引string对象
    cout << "The character at position 0 is:" << phrase[0] << "\n\n";
    cout << "Changing the character at position 0.\n";
    phrase[0] = 'L';
    cout << "The phrase is now " << phrase << "\n\n";
    //循环访问string对象
    for (unsigned int i = 0; i < phrase.size(); i++) {
        cout << "Character at position " << i << " is " << phrase[i] << endl;
    }
    cout << "\nThe sequence 'Over' begin at location ";
    cout << phrase.find("Over") << endl;
    //使用find()成员函数
    if (phrase.find("eggplant") == string::npos) {
        cout << "'eggplant' is not in the phrase.\n\n";
    }
    //使用erase()成员函数
    phrase.erase(4, 5);
    cout << "The phrase is now:" << phrase << endl;
    phrase.erase(4);
    cout << "The phrase is now:" << phrase << endl;
    phrase.erase();
    cout << "The phrase is now:" << phrase << endl;
    //使用empty()成员函数
    if (phrase.empty())	{
        cout << "\nThe phrase is no more.\n";
    }
    //system("pause");yon g
}

/**使用string对象*/
//int _tmain(int argc, _TCHAR* argv[]) {
//
//    return EXIT_SUCCESS;
//}

