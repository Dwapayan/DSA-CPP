#include <iostream>

using namespace std;

int nthFibonnaci(int n){
int fst =0;
int snd =1;
int current = 2;
int nextFib=0;

while (current <=n){
    nextFib= fst + snd;
    fst =snd;
    snd = nextFib;
    current++;
}
return nextFib;
}
int main(){
    int n;
    int sum = 0;
    cout << "Enter number nth number for fibonacci :" ; 
    cin >> n;
    cout << n <<"th fibonnaci = " << nthFibonnaci(n);
    return 0;
}