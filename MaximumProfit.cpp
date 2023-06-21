#include <iostream>
#include <vector>
#include <climits>

int maximumProfit(std::vector<int>& prices) {
    int n = prices.size();
    if (n <= 1) {
        return 0; // If there are no prices or only one price, no profit can be obtained
    }

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        // Update the minimum price if the current price is smaller
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
        // Update the maximum profit if the current price minus the minimum price is larger
        else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4}; // Example prices
    int maxProfit = maximumProfit(prices);

    std::cout << "Maximum Profit: " << maxProfit << std::endl;

    return 0;
}
