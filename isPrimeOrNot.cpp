#include <iostream>

using namespace std;

bool isPrimeOrNot(int n){
    bool isPrime = true;
    for (int i=2;i*i<=n;i++){
        if (n%i == 0){
            isPrime=false;
        }
    }
    return isPrime;
}

int main(){

    int n;
    bool isPrime=true;
    cout << "Enter a number : ";
    cin >> n;
    cout << n << " is " << (isPrimeOrNot(n) ? "a prime number" : "not a prime number");
    return 0;
}