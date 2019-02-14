#include<iostream>
using namespace std;

int main(){
    int num1 = 5, num2 = 10, temp;

    cout<< "Numbers before swapping."<<endl;
    cout<< "Number 1 = " << num1 <<", Number 2 = "<< num2<<endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout <<"Number after swapping. "<<endl;
    cout<< "Number 1 = "<< num1 <<", Number 2 = "<< num2<<endl;
    return 0;
}