#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> &vec, int sz, int target){
    for (int i=0;i<sz;i++){
        if (vec[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {4,2,7,8,1,2,5};
    int sz = vec.size();
    int target =8;
    cout << "Element found at : " << linearSearch(vec, sz, target) << endl;
    return 0;
}