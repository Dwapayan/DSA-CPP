#include <iostream>

using namespace std;


int main(){
    int nums1[] = {3,5,1,4,9,11,7};
    int nums2[] = {12,6,1,14,21,8,9};
    int sizeNums1 = sizeof(nums1)/sizeof(int);
    int sizeNums2 = sizeof(nums2)/sizeof(int);

    for (int i=0;i<sizeNums1;i++){
        for (int j=0;j<sizeNums2;j++){
            if (nums1[i] == nums2[j]){
                cout << nums1[i] << " ";
            }
        }
    }
    return 0;
}