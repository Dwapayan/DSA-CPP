#include <iostream>

using namespace std;


int main(){
    int nums[] = {5,15,22,1,-15,24};
    int size = sizeof(nums)/sizeof(int);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i=0;i<size;i++){
        smallest = min(nums[i], smallest);
    }
    cout << "Smallest number is : " << smallest << endl;

    for (int i=0;i<size;i++){
        largest = max(nums[i], largest);
    }
    cout << "Largest number is : " << largest << endl;

    return 0;
}