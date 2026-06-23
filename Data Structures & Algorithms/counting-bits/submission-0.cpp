class Solution {
public:
  unsigned int countOnesInBinary(unsigned int n) {
    unsigned int count = 0;
    while (n) {
        count += n & 1;  // Check if the last bit is 1
        n >>= 1;         // Shift n to the right by 1 bit
    }
    return count;
}
    vector<int> countBits(int n) {
     std::vector<int> output(n + 1);
    for (int i = 0; i <= n; ++i) {
        output[i] = countOnesInBinary(i);
    }
    return output;
    }
};
