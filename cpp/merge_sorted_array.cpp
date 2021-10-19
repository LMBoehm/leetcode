// solution 1:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int idx1 = m - 1;
    int idx2 = n - 1;
    for (int i = nums1.size() - 1; i >= 0; i--){
        if (idx2 < 0) nums1[i] = nums1[idx1--];
        else if (idx1 < 0) nums1[i] = nums2[idx2--];
        else if (nums1[idx1] > nums2[idx2]) nums1[i] = nums1[idx1--];
        else nums1[i] = nums2[idx2--];
    }
}

//solution 2 (better):
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    std::merge(crbegin(nums2), crend(nums2),
               crbegin(nums1) + n, crend(nums1),
               rbegin(nums1), std::greater());
}
