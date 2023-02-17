class Solution {
public:
    int numJewelsInStones(string J, string S) {
        if (J == "") return 0;
        unordered_map<int, int> map{};

        for (int i=0;i<J.size();i++) {
            if (map.count(J[i]-'A')) {
                map[J[i]-'A']++;
            } else {
                map.insert(std::make_pair(J[i]-'A', 1));
            }
        }

        int res = 0;
        for (int i=0;i<S.size();i++) {
            if (map.count(S[i] - 'A')) res += 1;
        }

        return res;
    }
};