// imperative
vector<int> plusOne(vector<int>& digits) {
    int i = digits.size() - 1;
    for (; i >=0; --i) {
        if (digits[i] == 9) {
            digits[i] = 0;
        } else {
            digits[i] += 1;
            break;
        }
    }
    if (digits.front() == 0) {
        digits.insert(begin(digits), 1);
    }
    return digits;
}
