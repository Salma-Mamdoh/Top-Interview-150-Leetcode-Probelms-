class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // split strign into words
        vector<string>vec;
        istringstream iss(s);
        string word;
        while (iss >> word) {
            vec.push_back(word);
        }
        if(pattern.length() != vec.size())return false;
        map<char,string>mm;
        for(int i=0 ; i<pattern.length() ; i++){
            if(mm.find(pattern[i])==mm.end()){
                mm[pattern[i]]=vec[i];
            }
            else{
                if(mm[pattern[i]]!=vec[i])return false;
            }
        }
        unordered_set<string> uniqueStrings(vec.begin(), vec.end());
        if(uniqueStrings.size()==mm.size()){
            return true;
        }
        return false;

    }
};
