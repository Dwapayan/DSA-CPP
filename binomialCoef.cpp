#include <iostream>

using namespace std;

int factorial(int n){
    int fact=1;
    while (n>0)
    {
        fact*=n;
        n-=1;
    }
    return fact;
}

int binomialCoef(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n, k;
    cout << "Enter first number for binomial coefficient = ";
    cin >> n;
    cout << "Enter second number for binomial coefficient = ";
    cin >> k;

    cout << "binomial coefficient of " << n << "," << k <<" = " << binomialCoef(n, k);
    return 0;
}
