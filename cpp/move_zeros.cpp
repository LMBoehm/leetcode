// solution:
std::stable_partition(begin(nums), end(nums), [](const auto n){ return n != 0; });
