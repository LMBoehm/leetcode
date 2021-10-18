vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    std::vector<int> nums3;
    std::sort(begin(nums1), end(nums1));
    std::sort(begin(nums2), end(nums2));
    std::set_intersection(begin(nums1), end(nums1), begin(nums2), end(nums2),
                          back_inserter(nums3));
    return nums3;
}
