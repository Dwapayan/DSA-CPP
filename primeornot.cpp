#include <iostream>

using namespace std;

int main(){

    int n;
    bool isPrime=true;
    cout << "Enter a number : ";
    cin >> n;
    for (int i=2;i*i<=n;i++){    //we only need to run loop upto square root of n to find prime i*i <= n or i<= root n
        if (n%i == 0){
            isPrime=false;
            break;
        }
    }
    if (isPrime){
        cout << "Number : " << n << " is prime\n";
    } else {
        cout << "Number : " << n << " is not prime\n";
    }
    return 0;
}