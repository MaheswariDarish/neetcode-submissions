class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned int reversed=0;
         for (int i = 0; i < 32; ++i) {
        reversed <<= 1;        // Shift left to make space for the next bit
        reversed |= (n & 1);   // Add the current bit of n to the result
        n >>= 1;               // Shift n to the right to process the next bit
    }
    return reversed;
    }
};
