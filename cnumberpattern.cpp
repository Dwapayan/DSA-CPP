#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter pattern N count = ";
    cin >> n;
    char ch='A';
    int number=1;
    for (int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}
