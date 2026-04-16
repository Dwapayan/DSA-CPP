#include <iostream>

using namespace std;


int main(){
    int nums[] = {5,15,5,1,3,7,1,3,21,7,5,1};
    int size = sizeof(nums)/sizeof(int);

    for (int i=0;i<size;i++){
        int occourance =0;
        for (int j=0;j<size;j++){
            if(nums[i] == nums[j]){
                occourance++;
            }
        }
        if (occourance == 1){
            cout << nums[i] << " ";
        }   
    }
    return 0;
}