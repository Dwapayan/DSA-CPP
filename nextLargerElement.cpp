#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> nextLargerElement(vector<int> arr1) {
    int n = arr1.size();
    vector<int> result(n, -1); // relult array is same size as input arrays initialized by -1 in all places
    stack<int> st;

    for (int i=n-1;i>=0;i--){
        
        // keep poping the elements from the stack pushed already if they are lesser then the current element. 
        // Once stack element is greater than current it is next greatest
        while (!st.empty() && arr1[i] >= st.top()){
            st.pop();
        }

        // Now since stack top element is next greatest for current element we need to store it in in
        // index of current element in the result array
        // boundary condition that stack should not be empty
        if(!st.empty()){
            result[i] = st.top();
        }

        // push the current element onto the stack
        st.push(arr1[i]);
    }

    return result;
}

int main(){
    vector<int> arr1 = {6, 8, 0, 1, 3};
    vector<int> result = nextLargerElement(arr1);

    for (int e : result) {
        cout << e << " ";
    }

    return 0;
}