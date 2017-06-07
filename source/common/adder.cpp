#include <iostream>
using namespace std;

#include <adder.h>

int Adder::sum(int a, int b) {
    cout << "Adder was call with parameters: a=" << a << ", b=" << b << endl; 
    return a + b;
}