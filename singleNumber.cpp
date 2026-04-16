#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int result=0;
    for (int i=0;i<nums.size();i++){
        result^=nums[i];
    }
    return result;
}
int main(){

    vector<int> vec = {1,2,2,4,1};
    cout << "Single number : " << singleNumber(vec) << endl;
    return 0;
}