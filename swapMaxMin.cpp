#include <iostream>

using namespace std;


int main(){
    int nums[] = {5,15,27,1,-15,24};
    int size = sizeof(nums)/sizeof(int);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smIndex=-1,lgIndex=-1;
    for (int i=0;i<size;i++){
        if (nums[i] < smallest){
            smallest = nums[i];
            smIndex=i;
        }
        if(nums[i] > largest){
            largest = nums[i];
            lgIndex=i; 
        }
    }
    swap(nums[lgIndex], nums[smIndex]);
    cout << "Smallest number is : " << smallest << endl;

    for (int i=0;i<size;i++){
        cout << nums[i] << " " << endl;
    }
    cout << endl;

    return 0;
}