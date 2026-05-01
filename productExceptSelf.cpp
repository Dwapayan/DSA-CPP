#include <iostream>
#include <vector>

using namespace std;

 vector<int> productExceptSelfBf(vector<int>& nums) {
        vector<int> result(nums.size(),1);
        for (int i=0;i<nums.size();i++){
            int product =1;
            for (int j=0;j<nums.size();j++){
                if (i!=j){
                    product*=nums[j];
                }
            }
            result[i] = product;
        }
        return result;
    }

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n,1);
    for (int i=1;i<n;i++){
        result[i] = result[i - 1]*nums[i - 1];
                
    }
    int suffix =1;
    for (int j=n-2;j>=0;j--){
        suffix = suffix*nums[j + 1]; 
        result[j] = result[j]*suffix;
    }
    return result;
}    

int main(){
    vector<int> nums = {1,2,3,4};

    cout << "Product except self (brute force) : " << endl;
    for (int i : productExceptSelfBf(nums)){
        cout << i;
        cout << " ";
    }
    cout << endl;
    cout << "Product except self (optimized) : " << endl;
    for (int i : productExceptSelf(nums)){
        cout << i;
        cout << " ";
    }
    return 0;
}