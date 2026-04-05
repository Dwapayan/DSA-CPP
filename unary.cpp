#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int b = a++;
    cout <<" a = " << a <<" b = " << b << endl;

    b = ++a;
    cout <<" a = " << a <<" b = " << b << endl;

    cout << ++a << endl;
    cout << a++ << endl;
    return 0;
}