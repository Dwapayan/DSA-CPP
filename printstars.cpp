#include <iostream>

using namespace std;

int main(){
    int noOfChars;
    cout << "Enter pattern N count = ";
    cin >> noOfChars;

    for (int i=0;i<noOfChars;i++){
        char ch ='A';
        for(int j=0;j<noOfChars;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}
