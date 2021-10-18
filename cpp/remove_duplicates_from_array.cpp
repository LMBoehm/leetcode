#include <algorithm>
#include <iterator>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        const auto it = std::unique(std::begin(nums), std::end(nums));
        return std::distance(std::begin(nums), it);
    }
};
