#include <iostream>
#include <vector>

using namespace std;

    // brute force approach calculating all possible containers and selecting maximum one
    int maxAreaBf(vector<int>& height) {
        int maxWater= INT_MIN;
        for (int i=0;i<height.size();i++){
            for (int j=i+1;j<height.size(); j++){
                int wt = j-i;
                int ht = min(height[i], height[j]);
                int area = wt*ht;
                maxWater=max(area, maxWater);
            }
        }
        return maxWater;
    }

    // optimized approach using 2 pointers
    int maxArea(vector<int>& height) {
    int maxWater= INT_MIN;
    int lftIdx = 0, rgtIdx = height.size()-1;
    while (lftIdx < rgtIdx){
        int wt = rgtIdx-lftIdx;
        int ht = min(height[lftIdx], height[rgtIdx]);
        int area = wt*ht;
        maxWater=max(area, maxWater);
        height[lftIdx] <  height[rgtIdx] ? lftIdx++ : rgtIdx--;
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "Container with most water (brute force) : " << maxAreaBf(height) << endl;
    cout << "Container with most water (optimized 2 pointer) : " << maxArea(height) << endl;
    return 0;
}