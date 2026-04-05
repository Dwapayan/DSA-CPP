#include <iostream>

using namespace std;

int main(){
    char c;
    cout << "Input a alphabet : ";
    cin >> c;

    if (c >= 65 && c <= 90){
        cout << "Upper case !\n";
    }else if (c >= 97 && c <= 122){
        cout << "Lower case!\n";
    }else{
        cout <<"Not an alphabet\n";
    }

    return 0;
}

