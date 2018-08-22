#include<iostream>
using namespace std;

class Test {
    public:
        Test() {} // empty constructor
        Test(const Test &t) {   // copy Constructor
            cout << "Inside Copy Constructor" << endl;
        }
        Test& operator = (const Test &t) { // overloading assignment
            cout << "Inside assignment operator" << endl;
        }
};

int main() 
{
    Test a, b;
    b = a;
    Test c = a;
    return 0;
}