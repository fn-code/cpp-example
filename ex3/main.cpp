#include<iostream>
using namespace std;

int a, b,c,d;
float fa, fb, fc, fd;
int main() {
    a = 75;
    b = 75u;
    c = 75l;
    d = 75ul;

    cout<< "Val Of A : "<< a <<endl;
    cout<< "Val Of B : "<< b <<endl;
    cout<< "Val Of C : "<< c <<endl;
    cout<< "Val Of D : "<< d <<endl;

    fa = 3.14159;
    fb = 3.02e23; // 6.02 x 10^23
    fc = 1.6e-19; // 1.6 x 10^-19
    fd = 3.0;
    cout << "Val of FA : "<< fa << endl;
    cout << "Val of FB : "<< fb << endl;
    cout << "Val of FC : "<< fc << endl;
    cout << "Val of FD : "<< fd << endl;

    return 0;
}