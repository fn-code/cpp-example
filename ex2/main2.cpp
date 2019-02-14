#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int b(3);
    int c{2};
    int result;
    a = a+b;
    result = a -c;

    // d value same as result value
    auto d = result;

    int foo = 10;
    // bar type same as foo type
    decltype(foo) bar ;
    bar = result;
    cout << bar<<endl;

    return 0;
}