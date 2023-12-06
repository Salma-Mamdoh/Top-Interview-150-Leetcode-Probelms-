class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        vector<int> mapping_s_to_t(128, -1);
        vector<int> mapping_t_to_s(128, -1);

        for (int i = 0; i < s.length(); i++) {
            char char_s = s[i];
            char char_t = t[i];

            if (mapping_s_to_t[char_s] == -1 && mapping_t_to_s[char_t] == -1) {
                mapping_s_to_t[char_s] = char_t;
                mapping_t_to_s[char_t] = char_s;
            } else {
                if (mapping_s_to_t[char_s] != char_t || mapping_t_to_s[char_t] != char_s) {
                    return false;
                }
            }
        }

        return true;
    }
};
