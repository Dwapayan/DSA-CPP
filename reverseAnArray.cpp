#include <iostream>

using namespace std;

void reverseArray(int arr[], int sz){
    for (int i=0,j=sz-1; i<j; i++,j--){
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }
}

void printArray( int arr[], int sz){
    for (int i=0;i<sz;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {5,2,1,8,7,2,4};
    int sz = sizeof(arr)/sizeof(int);

    cout << "Array before reversing : "<< endl;
    printArray(arr,sz);
    reverseArray(arr, sz);
    cout << "Array after reversing : "<< endl;
    printArray(arr,sz);
    return 0;
}