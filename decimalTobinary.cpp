#include <iostream>
#include <math.h>

using namespace std;


int toBinary(int n){
    int power=1;
    int binaryNumber=0;
    while (n > 0){
        binaryNumber = binaryNumber + (n%2)*power;
        n/=2;
        power*=10;
    }
    return binaryNumber;
}

int toDecimal(int binaryNumber){
    int decimalNumber=0;
    int power=1;

    while(binaryNumber > 0){
        decimalNumber+= binaryNumber%10*power;
        binaryNumber/=10;
        power*=2;
    }
    return decimalNumber;
}

void printBinaryRange(int rangeN){
    for (int i=1;i<=rangeN;i++){
        cout << toBinary(i) << endl;
    }
}

int main(){
    int n, rangeN;
    int binNumber=1100101;
    cout << "Enter decimal number for binary conversion :" ; 
    cin >> n;
    cout << "Binay number representing " << n << " is " << toBinary(n) <<endl;
    cout << "Enter number range to print binary numbers :" ; 
    cin >> rangeN;
    printBinaryRange(rangeN);
    cout << "Decimal number representing " << binNumber << " is " << toDecimal(binNumber) <<endl;
    return 0;
}