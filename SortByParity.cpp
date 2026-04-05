#include <iostream>
#include <vector>

using namespace std;

vector<int> sortArrayByParityII(vector<int>& nums) {

        int oddIndex=1;
        for (int i=0;i<nums.size();i+=2){
            if (nums[i] % 2 !=0){
                while (nums[oddIndex] % 2 != 0){
                    oddIndex+=2;
                }
                 std::swap(nums[i], nums[oddIndex]);
            }
        }
        return nums;
}

int main(){
    vector<int> nums ={648,831,560,986,192,424,997,829,897,843};
    vector<int> result = sortArrayByParityII(nums);
    for (int num : result){
        cout << num << endl; 
    }
    return 0;
}







