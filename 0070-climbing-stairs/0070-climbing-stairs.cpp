class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

    int first = 1, second = 2, current;

    for (int i = 3; i <= n; ++i) {
        current = first + second;
        first = second;
        second = current;
    }

    return second;
    }
    int main() {
    int n = 3;
    cout << climbStairs(n) << endl;  // Output: 3
    return 0;
}
};