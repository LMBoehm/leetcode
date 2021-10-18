// imperative
vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int, int> missing_to_idx;
    int idx = 0;
    for (const auto n : nums) {
        const auto missing = target - n;
        if (missing_to_idx.find(n) != end(missing_to_idx))
            return {idx, missing_to_idx[n]};
        missing_to_idx.emplace(missing, idx);
        idx++;
    }
    return {};
}
