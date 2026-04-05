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

void printPrimes(int n){
    for (int i=2;i<=n;i++){
        if (isPrimeOrNot(i)){
            cout << i << endl;
        }
    }
}

int main(){

    int n;
    cout << "Enter a number : ";
    cin >> n;
    printPrimes(n);
    return 0;
}