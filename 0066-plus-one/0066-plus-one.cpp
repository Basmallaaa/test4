class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            digits[i]++;  // Just add one and return
            return digits;
        }
        digits[i] = 0;  // Set to 0 and continue loop to handle carry
    }

    // If we reach here, all digits were 9, so we need extra space
    digits.insert(digits.begin(), 1);
    return digits;
    }
};