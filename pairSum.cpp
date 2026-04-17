#include <iostream>
#include <vector>

using namespace std;

//pair sum brute force
vector<int> pairSumBf(vector<int>& vec, int size, int target){
    vector<int> result;
    for (int i=0;i<size;i++){
        for (int j=i;j<size;j++){
            if (vec[i] + vec[j] == target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}

//pair sum optimized - 2 pointer approach
// we make use of sorted array in ascending order.
// requires sorted array
vector<int> pairSumOpt(vector<int>& vec, int size, int target){
    vector<int> result;
    int start=0;
    int end = size-1;
    while (start < end){
        if (vec[start] + vec[end] < target){
            start++;
        } else if (vec[start] + vec[end] > target){
            end--;
        } else{
            result.push_back(start);
            result.push_back(end);
            return result;
        }
    }
    return result;
}

//pair sum optimized further uses binary search method
vector<int> pairSum(vector<int>& vec, int size, int target){
    vector<int> result;
    int start=0;
    int end = size-1;
    while (start < end){
        if (vec[start] + vec[end] < target){
            start=(start+end)/2;
        } else if (vec[start] + vec[end] > target){
            end=(start+end)/2;
        } else{
            result.push_back(start);
            result.push_back(end);
            return result;
        }
    }
    return result;
}

int main(){
    vector<int> vec = {2,7,11,15};
    int size = vec.size();
    int target=22;
    vector<int> result = pairSum(vec,size,target);
    cout << "pair sum for target : " << target << " = " << result[0] << " , " << result[1];
    return 0;
}