#include <iostream>
#include <stack>

using namespace std;

int reverseInteger(int n){
    int result =0;
    int pow=1;
    std::stack<int> st1;
    while (n != 0){
        st1.push(n%10);
        n=n/10;
    }

    while (!st1.empty()){
        result+= (st1.top())*pow;
        pow*=10;
        st1.pop();
    }

    return result;    
}

int main(){

    cout << "123 reverse is : " << reverseInteger(123) << endl;
    return 0;
}