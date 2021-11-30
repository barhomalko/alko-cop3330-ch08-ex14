/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 barhom alko
 */

#include "std_lib_facilities.h"


void f(const int n)
{
//    ++n;  // cannot modify const argument
    cout << n << endl;
}

int main()
try
{
    int n = 10;
    f(n);
}
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";
}

