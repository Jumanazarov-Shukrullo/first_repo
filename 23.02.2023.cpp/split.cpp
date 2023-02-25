class Solution {
public:
    int balancedStringSplit(string s) {
         int n = 0, l = 0;
        for (char c : s) {
            if (c == 'L')
                ++l;
            else
                --l;
            if (l == 0) ++n;
        }
        return n;
    }
};
