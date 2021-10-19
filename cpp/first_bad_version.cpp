//imperative solution
int firstBadVersion(int n) {
    int lower = 0;
    int upper = n;
    while (true) {
        int check = (upper - lower) / 2 + lower;
        const bool bad = isBadVersion(check);
        if (bad) {
            upper = check;
        } else {
            lower = check;
        }
        if (upper - lower < 2) return (bad) ? check : check + 1;
    }
}

// cleaner
int binary_search(int left, int right){
    if(left == right) return left;
    int middle = left + (right - left)/2;
    if (isBadVersion(middle))
        return binary_search(left, middle);
    else
        return binary_search(middle + 1,right);
}

int firstBadVersion(int n) {
    return binary_search(0, n);
}
