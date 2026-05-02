#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int bestBuy = prices[0];
        for (int i=1;i<prices.size();i++){
            if (prices[i] > bestBuy){
                maxProfit = max(prices[i] -bestBuy, maxProfit);
            }
            bestBuy = min(prices[i], bestBuy);
        }
        return maxProfit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    vector<int> prices2 = {7,6,4,3,1};

    cout << "Maximum profit case 1 : " << maxProfit(prices) << endl;
    cout << "Maximum profit case 2 : " << maxProfit(prices2) << endl;
    return 0;
}