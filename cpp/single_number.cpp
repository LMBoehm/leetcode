int singleNumber(vector<int>& nums) {
    std::sort(begin(nums), end(nums));
    const auto it = std::adjacent_find(begin(nums), end(nums),
                                       [even = 0](auto left, auto right) mutable
                                       { return ((++even % 2) && left != right); });
    return (it == end(nums)) ? nums.back() : *it;
}
