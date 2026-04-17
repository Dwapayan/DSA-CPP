#include <iostream>
#include <vector>

using namespace std;

void printSubArraysBf(vector<int>& vec, int size){
    // brute force method to print all sub arrays
    for (int start=0;start < size; start++){
        for (int end=start; end < size; end++){
            for (int index=start;index<=end;index++){
                cout << vec[index];
            }
            cout << " ";
        }
        cout <<endl;
    }
}

int maxSubArraySumBf(vector<int>& vec, int size){
    // brute force method to max sub array sum
    int maxSum=INT_MIN;
    for (int start=0;start < size; start++){
        int currentSum=0;
        for (int end=start; end < size; end++){
            // since we keep adding an end element to sub array all we need to do is add it to sum -> 1 12 123 1234
            currentSum+=vec[end]; 
            maxSum = max(maxSum,currentSum);             
        }
    }
    return maxSum;
}

int maxSubArraySum(vector<int>& vec, int size){
    // Kadane's Algorithm to max sub array sum
    int maxSum=INT_MIN;
    int currentSum=0;
    for (int i=0;i < size; i++){
        currentSum+= vec[i];
        maxSum = max(maxSum,currentSum);
        if (currentSum<0){
            currentSum=0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int> vec1 ={3,-4,5,4,-1,7,-8};
    int size = vec.size();
    printSubArraysBf(vec,size);
    cout << "Max sub array sum = " << maxSubArraySum(vec1,vec1.size());
    return 0;
}