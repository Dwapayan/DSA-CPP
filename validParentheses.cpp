#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '['){
                st.push(c); // push to stack if opening parentheses
            } else {
                if (st.size() == 0){ //if anything other than opening and length is zero return false case
                    return false;
                }else if(((c == ')' && st.top() == '(') || ((c == '}' &&  st.top() =='{')  || (c == ']' &&   st.top()=='[')))){
                    st.pop(); // closing parentheses compared to stack top if matches then pop from stack
                }else{
                    return false; // else case very important if parentheses encountered does not match stack top
                }
            }
        }
        return st.empty(); //if balanced it will be empty
}
int main(){
    string s0="()";
    string s1 = "()[]{}";
    string s2 = "(]";
    string s3 = "([])";
    string s4="([)]";

    cout << (isValid(s0) ? "valid" : "invalid");
    cout << endl;
    cout << (isValid(s1) ? "valid" : "invalid");
    cout << endl;
    cout << (isValid(s2) ? "valid" : "invalid");
    cout << endl;
    cout << (isValid(s3) ? "valid" : "invalid");
    cout << endl;
    cout << (isValid(s4) ? "valid" : "invalid");
    cout << endl;

    return 0;
}