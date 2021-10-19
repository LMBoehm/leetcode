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
