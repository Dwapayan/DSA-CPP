#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &vec, int sz){
    for (int i=0,j=sz-1; i<j; i++,j--){
        swap(vec[i],vec[j]);
    }
}

void printArray( vector<int> &vec, int sz){
    for (int i=0;i<sz;i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> vec = {5,2,1,8,7,2,4};
    int sz = vec.size();

    cout << "Vector before reversing : "<< endl;
    printArray(vec,sz);
    reverseArray(vec, sz);
    cout << "Vector after reversing : "<< endl;
    printArray(vec,sz);
    return 0;
}