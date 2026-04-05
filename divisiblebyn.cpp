#include <iostream>

using namespace std;

int main(){
    int n, divisor;
    cout << "Enter number range n = ";
    cin >> n;
    cout << "Enter number between 1 and " << n << " = ";
    cin >> divisor;
    int sum=0;
    for (int i=divisor;i<=n; i+=divisor){
        cout << i << endl;
        sum+=i;
    }
    cout << "Sum of numbers divisible by " << divisor << " = " << sum << endl;
    return 0;
}
