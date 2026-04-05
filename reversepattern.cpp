#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter pattern N count = ";
    cin >> n;
    char ch='A';
    int number=1;
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << ' ';
        }
        for(int j=i;j<n;j++){
            cout << i+1 ;
        }
        cout << endl;
    }
    return 0;
}
