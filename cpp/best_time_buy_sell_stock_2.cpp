// imperative
int maxProfit(vector<int>& prices) {
    auto min = prices.front();
    auto profit = 0;
    for (auto p : prices) {
        if (p > min) {
            profit += p - min;
        }
        min = p;
    }
    return profit;
}

// algorithm
int maxProfit(vector<int>& prices) {
    return std::transform_reduce(std::cbegin(prices), std::cend(prices) - 1,
                                 std::cbegin(prices) + 1, 0,
                                 std::plus(),
                                 [] (auto a, auto b) { return (b > a) ? b - a : 0; });
}
