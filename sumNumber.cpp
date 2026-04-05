#include <iostream>

using namespace std;

int sum(int n){
    int sum =0;
    while (n != 0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter number to find sum of its digits = ";
    cin >> n;

    cout<< sum(n) << endl;

    return 0;
}