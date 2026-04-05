#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter pattern N count = ";
    cin >> n;
    for (int i=0;i<n;i++){
        for(int j=0;j < n-(i+1);j++){
            cout << ' ';
        }
        int numb = 1;
        for(int j=1;j<=i+1;j++){ 
         cout << j;
         numb++;
        }
        for(int k=i;k>0;k--){ 
            cout << k;
        }
        cout << endl;
    }
    return 0;
}
