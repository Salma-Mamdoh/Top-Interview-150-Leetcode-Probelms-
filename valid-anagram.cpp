class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>s1;
        if(s.size()!=t.size())return false;
        for(int i=0 ; i<s.length() ; i++){
            s1[s[i]]++;
        }
        for(int i=0 ; i<t.length(); i++){
            if(s1.find(t[i])!=s1.end() && s1[t[i]]>0)s1[t[i]]--;
            else return false;
        }
        return true;
    }
};
