void rotate(vector<int>& nums, int k) {
    std::rotate(rbegin(nums), rbegin(nums) + (k % nums.size()), rend(nums));
}
