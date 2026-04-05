#include <iostream>

using namespace std;

int main(){
    int n;
    int sum = 0;
    string sumType;
    int modResult;
    while (sumType != "E" && sumType != "O"){
        cout << "Specify if even/odd number sum is required - Type E for even O for odd\n";
        cin >> sumType;
    }

    modResult = sumType == "E" ? 0 : 1;
    cout << "Enter number upto which sum is to be found :\n" ; 
    cin >> n;

    int count=1;
    while (count<=n){
        if(count%2==modResult){
            sum+=count;
        }
        count++;
    }
    // for (int i=1;i<=n;i++){
    //     if(i%2==modResult){
    //         sum+=i;
    //     }
    // }

    sumType = sumType=="E" ? "Even" : "Odd";
    cout << "Sum of first " << n << " " << sumType <<" natural numbers is = " << sum << endl;
    return 0;
}