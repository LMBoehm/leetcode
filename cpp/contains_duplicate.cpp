bool containsDuplicate(vector<int>& nums) {
    std::sort(begin(nums), end(nums));
    return std::adjacent_find(cbegin(nums), cend(nums)) != cend(nums);
}
