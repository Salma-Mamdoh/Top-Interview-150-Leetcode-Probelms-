class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream iss(s);
        vector<string> words;
        string word;
    while (iss >> word) {
        words.push_back(word);
        }

        return words.back().length();
    }
};
