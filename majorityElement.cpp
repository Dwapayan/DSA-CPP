#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// brute force approach 2 loops O(n²)
int majorityElementBf(vector<int>& vec, int size){
    for (int number : vec){
        int frequency =0;
        for (int element : vec){
            if (number == element){
                frequency++;
            }
        }

        if (frequency > (size/2)){
            return number;
        }
    }
    return -1;
}

// optimized brute force approach 2 loops O(nlogn + n)
int majorityElementOp(vector<int>& vec, int size){
    // sort first
    sort(vec.begin(), vec.end());
    int answer=vec[0], frequency =1; 
    for (int i=1;i<size;i++){
        if (vec[i] == vec[i-1]){
            frequency++;
        } else {
            frequency=1;     // ith is not equal to i-1 element means new element found reset frequency
            answer = vec[i]; // set new number found as answer
        }

        if (frequency > (size/2)){
            return answer;
        }
    }
    return -1;
}

// moore's algorithm O(n)
int majorityElement(vector<int>& nums, int size) {
        int frequency=0, answer=0;
        for (int i=0;i<size;i++){
            if (frequency==0){
                answer=nums[i];
            }
            if (nums[i]==answer){
                frequency++;
            }else{
                frequency--;
            }
        }
        return answer;
    }

int main(){
    vector<int> vec = {1,2,2,1,2,3,2,3,1,2,2,3,2};
    int size = vec.size();
    cout << "Majority element : " << majorityElement(vec, size) << endl;
    return 0;
}