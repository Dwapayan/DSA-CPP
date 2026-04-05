#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter pattern N count = ";
    cin >> n;

    for (int i=0;i<n;i++){

        // Print stars
        for (int j=0;j<i+1;j++){
            cout << "*";
        }
        // print spaces
        for (int k=0;k<n-i-1;k++){
            cout <<"  ";  //double spaces n-k-1 is for single space and we need double to avoid same loop again
        }

        // Print stars
        for (int l=0;l<i+1;l++){
            cout << "*";
        }

        cout <<endl;
    }
    for (int i=0;i<n;i++){
        // Print stars
        for (int m=0;m<n-i;m++){
            cout << "*";
        }

        // print spaces
        for (int o=0;o<i;o++){
            cout <<"  ";  //double spaces n-k-1 is for single space and we need double to avoid same loop again
        }

        // Print stars
        for (int p=0;p<n-i;p++){
            cout << "*";
        }
        cout << endl;
    }
return 0;
}